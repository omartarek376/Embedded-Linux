# Explanation

### First i cloned the linux repo (latest version only) using the following command:

```
git clone --depth=1 git://git.kernel.org/pub/scm/linux/kernel/git/stable/linux.git
```

### Afterwards i configured the kernel to vxpress using the following command (when i tried it without specifying the ARCH it gave me an error):

```
make ARCH=arm vexpress_defconfig
```

### Afterwards i configured the kernel as requested:

![Screenshot from 2024-01-20 12-17-34](https://github.com/omartarek376/Embedded-Linux/assets/111865747/1e10b648-3f3d-436a-b4d6-e569402f55b7)

![Screenshot from 2024-01-20 12-17-43](https://github.com/omartarek376/Embedded-Linux/assets/111865747/570cae8c-3063-4d3f-80b7-03992fbdee0b)

### Then i configured the compiler for arm:

```
export CROSS_COMPILE=~/x-tools/arm-cortexa9_neon-linux-musleabihf/bin/arm-cortexa9_neon-linux-musleabihf-
```

### I also configured the architecture:

```
export ARCH=arm
```


### Finally i built the kernel using the following command:

```
make -j12 zImage modules dtbs
```

Note: you will see a lot of configurations you can add to the kernel (ALOT!!!) so just keep holding down the enter key to skip it all


### During the build process you might encounter some missing libraries here are the ones that were missing from me:

```
sudo apt-get install libgmp-dev
```

```
sudo apt-get install libmpc-dev
```

### After creating the image and .dtb file i copied them to the virtual sd card to get loaded on qemu (i got lazy and didn't want to reconfigure tftp :p)

Note: I needed to modify the commands that were inside the bootcmd command as the new files had different names than what i originally configured 

### AND FINALLY (for real this time) i loaded qemu and got to the part where the kernel got loaded but it panicked ;)

![Screenshot from 2024-01-20 12-24-31](https://github.com/omartarek376/Embedded-Linux/assets/111865747/a6f96fb8-edf2-4318-a157-a9638a577a56)



