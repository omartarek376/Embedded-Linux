## Explanation

After running this script tha .bashrc file gets updated with the following lines:

![Screenshot from 2023-12-03 15-51-54](https://github.com/omartarek376/Embedded-Linux/assets/111865747/c3799a23-11b3-4a08-bd2d-43263d72d7c3)


Which created a ENV variable named HELLO that has the HOSTNAME value stored in it.


It also created a Local variable named LOCAL that has the whoami value stored in it but since it is created in the .bashrc it can be technically be called a ENV or a global variable as it will always be present in any terminal created from now on except for the one that raw the script (unless you source the .bashrrc in it aswell)


Here is the output to verify that the variables have been created succesfully:

![Screenshot from 2023-12-03 15-45-57](https://github.com/omartarek376/Embedded-Linux/assets/111865747/33359440-b03f-4a63-a86d-0de9f1ba9a71)
