## Static

First we created and linked the static library to our main.c as follows:

![Screenshot from 2023-12-18 22-12-57](https://github.com/omartarek376/Embedded-Linux/assets/111865747/28f4d25a-3cd1-49e5-845b-7b30df617f8c)

Afterwards we check its properties using the ldd,file,and objdump commands

![Screenshot from 2023-12-18 22-14-34](https://github.com/omartarek376/Embedded-Linux/assets/111865747/6ef260f7-9afe-4046-8e59-38ac676762cc)

![Screenshot from 2023-12-18 22-15-09](https://github.com/omartarek376/Embedded-Linux/assets/111865747/f57b0eab-6760-40bc-86ca-b811fca023d5)

## Dynamic

First we created and linked the dynamic library to our main.c as follows:

![Screenshot from 2023-12-18 22-32-07](https://github.com/omartarek376/Embedded-Linux/assets/111865747/e142e119-3e39-4c72-a5c2-f35daef06b27)

Which if we tried to run the executable it will fail as the system loader cannot find the dynamic library so we modified the last line with the rpath variable as follows:

![Screenshot from 2023-12-19 12-50-04](https://github.com/omartarek376/Embedded-Linux/assets/111865747/1a8947de-83d2-4152-a152-04b96ae0ae52)

Afterwards we check its properties using the ldd,file,and objdump commands

![Screenshot from 2023-12-19 12-50-52](https://github.com/omartarek376/Embedded-Linux/assets/111865747/758ab26a-ad73-4c7a-b035-641cc424d759)

![Screenshot from 2023-12-19 12-51-26](https://github.com/omartarek376/Embedded-Linux/assets/111865747/cd01ff0e-04a8-4da1-851b-17d034d4c4d8)

## Explanation

From the previous experiments we conclude the following:
1) static libraries work by adding the source files into the executable so when called the code finds it quicky without the need for a system loader.
2) you can determine it is a static lybrary by using the ldd command (shows not statically linked and doesn't require other libraries) or using the file command (it writes that it is statically linked) or using objdump (it says static at the top of it and there is no dynamic section listing the libraries needed from the system loader).
3) dynamic libraries work during runtime by the use of the system loader (path to library must be know to it).
4) you can determine it is a static library by using the ldd command (here it list the libraries needed including the liboperations that we created) or using the file command (states that it is dynamically linked) or using the objdump (states in the header that it is dynamic and there is a dynamic section that shows the libraries needed including the liboperations.so).
5) static libraries are created using the arc command (archive) and is a .a file
6) dynamic libraries are created first using the fpic flag when creating the obj files needed for the library (when library is loaded in runtime it is loaded at address known by the application)
then compilling all of them in a .so file using gcc and the -shared flag.

