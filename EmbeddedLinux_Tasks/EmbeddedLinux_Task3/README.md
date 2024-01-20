## New Record ;)

![Screenshot from 2023-12-21 14-02-12](https://github.com/omartarek376/Embedded-Linux/assets/111865747/f90c9bc5-9d14-4c6a-9d60-f2c14a68bd87)

![Screenshot from 2023-12-21 14-05-31](https://github.com/omartarek376/Embedded-Linux/assets/111865747/b6cfaa1f-b443-40cf-b816-3f969261630a)

## Explanation

### Sysroot:

sysroot it the main root file system that will be copied over to the target board and it represents the "/" for said target and in it it includes 2 folders:

the first includes all the libraries that out target system will need such as musl, c++ and so on.

the other is the usr file which inside it has all the binaries, includes, and the libraries that the user himself will need.

### Binutil:

They are system libraries that may be important to the system but are not inside the sysroot and the include: ar, objdump, strace, readelf and so on
and the developer can add them to the sysroot to be placed on the target board if he desires.
