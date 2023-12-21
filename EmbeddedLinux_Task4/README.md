## Output

![Screenshot from 2023-12-21 16-49-38](https://github.com/omartarek376/Embedded-Linux/assets/111865747/534a2670-48d8-45b4-b714-6e851e36e3e1)

![Screenshot from 2023-12-21 16-50-11](https://github.com/omartarek376/Embedded-Linux/assets/111865747/f293baa8-c5a2-43ff-8fa1-94dbaa7d46d3)

## Explanation

in AVR and other bare metal embedded applications the target most likely will nnot have a system loader that can dynamically link libraries during runtime
and even if they did most avr and bare metal embedded applications have limited computing power (usually a weak single core processor) so if we use a dynamic library it will be a major overhead
for the running application.

that's why dynamic libraries are more common in embedded linux hardware or any hardware that will have a OS and sufficient processing power
