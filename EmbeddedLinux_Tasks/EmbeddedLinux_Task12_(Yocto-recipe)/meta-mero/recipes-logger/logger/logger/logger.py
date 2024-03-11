import os
from datetime import datetime
import sys

def log_user_message(message):
    log_file_path = "/var/log/user.log"
    
    # Check if the log directory exists, if not, create it
    log_directory = os.path.dirname(log_file_path)
    if not os.path.exists(log_directory):
        os.makedirs(log_directory)

    # Get the current date and time
    current_time = datetime.now().strftime("%d-%m-%Y - %H:%M:%S")

    # Construct the log message with date and time
    log_entry = f"[{current_time}] {message}"

    # Open the log file in append mode and write the message
    with open(log_file_path, "a") as log_file:
        log_file.write(log_entry + "\n")

    print("Message logged successfully to", log_file_path)

if __name__ == "__main__":
    # Check if the script is being run interactively or as a service
    if os.isatty(sys.stdin.fileno()):
        # Script is being run interactively
        user_input = input("Enter your message: ")
        log_user_message(user_input)
    else:
        # Script is being run as a service
        log_user_message("Log service initiated please run the python script from a terminal to log the desired messages")
        while True:
            pass  # This will keep the script running indefinitely

