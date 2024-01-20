## Output

![Screenshot from 2023-12-21 16-49-38](https://github.com/omartarek376/Embedded-Linux/assets/111865747/534a2670-48d8-45b4-b714-6e851e36e3e1)

![Screenshot from 2023-12-21 16-50-11](https://github.com/omartarek376/Embedded-Linux/assets/111865747/f293baa8-c5a2-43ff-8fa1-94dbaa7d46d3)

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/29e55e0f-98a6-4da5-bc65-a284e22a6834)


### But after trying it on proetus i discovered that i combiled it without specifying a target board in mind which cause the executable to try and access memory places that weren't in the microcontroller itself (in my case atmega32) so in order to fix this i neded to add the following flag: -mmcu=atmega32 and after testing it again it works perfectly

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/f2318823-c75e-418f-916b-37e2dd4e9d4b)


## Explanation

in AVR and other bare metal embedded applications the target most likely will nnot have a system loader that can dynamically link libraries during runtime
and even if they did most avr and bare metal embedded applications have limited computing power (usually a weak single core processor) so if we use a dynamic library it will be a major overhead
for the running application.

that's why dynamic libraries are more common in embedded linux hardware or any hardware that will have a OS and sufficient processing power
