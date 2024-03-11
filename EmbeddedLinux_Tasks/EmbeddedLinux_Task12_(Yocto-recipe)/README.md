# Explanation

## Python script:

First we create a python script that logs messages and saves them to the file /var/log/user.log 

The code does the following:

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/44d352c5-b43d-4ee2-9e68-a28ad73d95d5)


1) It checks if the script is being run from a service or is running normally from a terminal.
2) If it is running from a service it just logs a default message then gets stuck in a while(1) loop.
3) If it is running from a terminal it asks the user for the message to be logged in the file and saves the message to the file.

## Logger recipe:

We then create a recipe file so the python script gets installed to our image:

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/9a734b1d-4d7b-45f7-aed8-e481f2f251a9)

The `RDEPENDS:${PN} += "python3"` line is there so that the final image has python3 installed in so that we can run the script on it

Finally in order for this to actually get installed you have 2 options:

1) Modify the local.conf with the following line: `IMAGE_INSTALL_append = " my-recipe"`
2) Modify the core-image-minimal recipe with the recipy you want

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/8d5e29e7-e969-44f8-a5c4-23ccd6c0495d)

## Logger service

We then created a service that runs on startup and runs indefinetly as it gets stuck in the while (1) loop of the python script as previously explained.

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/108351cd-11d4-4956-936c-cd201df6e2d2)

## Logger bbappend

In order to install this service onto the target we created a .bbapend file to modify the original recipe so that it installs the service alongside the script (in the image not the same file though).

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/d8912d47-23c8-4689-bb56-f0f94a2ef014)

## Demoapp recipe

Finally we neded to create a recipe in order to download a package from github and run cmake that is in it and install the binary in usr/bin

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/e6e74a08-a4c7-4765-82a6-b7a6332a6fb4)

### Recipe explanation

1) The do configure tab creates a build director so that cmake runs in it.
2) in order to clone the repo you need to provide the link and put it in the `SRC_URI` variable (you can add extra options to it like the protocol and which branch to switch to aswell at the end).
3) The `SRCREV` is the actual hash commit you want to clone (set it to the last version or whatever commit you like this one is the last version).
4) In the do install the second line you need to specify the name of the binary that will be produced after cmake and where it is then i take it and rename it to demoapp and place it in usr/bin on the image.

# Output 

Here is the output of the python script/service:

![Screenshot from 2024-03-11 11-09-52](https://github.com/omartarek376/Embedded-Linux/assets/111865747/28019482-e175-4035-8e8d-86b2e11044ca)

Here is the output of the demoapp running:

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/2177ad44-729d-4d16-8ae8-2554c3304e24)

# Notes/words of advice

1) I am currently working with kirkstone version so some syntax in recipes and bbapend might be different if you are running dunfell (for example `do_install:append` is `do_install_append` in dunfell and so on).
2) Yocto is very specific when it comes to naming files and its file hierarchy.
3) Feel free to ask me anything in the task at any time 😃. 







