#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <condition_variable>
#include <thread>

#include <vsomeip/vsomeip.hpp>

#define SAMPLE_SERVICE_ID 0x1234
#define SAMPLE_INSTANCE_ID 0x5678
#define SAMPLE_METHOD_ID 0x0421

std::mutex mutex;
std::condition_variable condition;
bool isConnectionEstablished = false; // Flag to track availability status

std::shared_ptr<vsomeip::application> app;

void send_numbers()
{
    std::unique_lock<std::mutex> its_lock(mutex);
    condition.wait(its_lock, [] { return isConnectionEstablished; }); // Wait until connection is established
    std::cout << "Trying to find the secret sauce" << std::endl;
    std::ifstream file("secret_sauce.txt");
    if (file.is_open())
    {
        int number1, number2;
        file >> number1 >> number2;
        file.close();

        // Create payload
        std::shared_ptr<vsomeip::payload> payload = vsomeip::runtime::get()->create_payload();
        std::vector<vsomeip::byte_t> payload_data;
        payload_data.push_back(static_cast<vsomeip::byte_t>(number1));
        payload_data.push_back(static_cast<vsomeip::byte_t>(number2));
        payload->set_data(payload_data);

        // Create message
        std::shared_ptr<vsomeip::message> message = vsomeip::runtime::get()->create_request();
        message->set_payload(payload);

        // Set service, instance, and method IDs
        message->set_service(SAMPLE_SERVICE_ID);
        message->set_instance(SAMPLE_INSTANCE_ID);
        message->set_method(SAMPLE_METHOD_ID);

        // Send message
        app->send(message);
        std::cout << "Sending the secret sauce" << std::endl;
    }
    else
    {
        std::cout << "Failed to find the secret sauce" << std::endl;
    }
}

void on_message(const std::shared_ptr<vsomeip::message> &_request)
{
    std::shared_ptr<vsomeip::payload> its_payload = _request->get_payload();
    int recieved_command = *(its_payload->get_data());
    // Check if the response is 1
    if (recieved_command == 1)
    {
        // Turn on the caps lock LED on the keyboard
        std::ofstream brightness_file("/sys/class/leds/input3::capslock/brightness");
        if (brightness_file.is_open())
        {
            brightness_file << "1";
            brightness_file.close();
        }
    }
}

void on_availability(vsomeip::service_t _service, vsomeip::instance_t _instance, bool _is_available)
{
    std::cout << "CLIENT: Service ["
              << std::setw(4) << std::setfill('0') << std::hex << _service << "." << _instance
              << "] is "
              << (_is_available ? "available." : "NOT available.")
              << std::endl;
    isConnectionEstablished = _is_available; // Update the availability status
    condition.notify_one();
}

int main()
{
    app = vsomeip::runtime::get()->create_application("CAPSLOCK TOGGLE");
    app->init();
    app->register_availability_handler(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, on_availability);
    app->request_service(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID);
    app->register_message_handler(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_METHOD_ID, on_message);
    std::thread sender(send_numbers);
    app->start();
}