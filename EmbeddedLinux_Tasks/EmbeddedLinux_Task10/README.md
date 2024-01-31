# Explanation

## First i configured the bootargs i u-boot as follows:

```
setenv bootargs 'console=ttyo0 console=ttyAMA0,115200 root=/dev/mmcblk0p2 rw rootwait init=/sbin/init'
```

### the ttyAMA0 is optional if you want to see the u-boot aunching the kernel in full detail, otherwise set it as follows:

```
setenv bootargs 'console=ttyo0,115200 root=/dev/mmcblk0p2 rw rootwait init=/sbin/init'
```

## Afterwards i cloned busybox and configured it once for static and once for dynamic (for simpicity i will explain in detail the dynamic one and will point out the differences as i go along)

![Screenshot from 2024-01-28 14-09-05](https://github.com/omartarek376/Embedded-Linux/assets/111865747/fa994db7-7c8b-4e5f-bd7e-6b2ab86cfe16)

if you are working on dynamic you don't need to cinfigure anything just build busybox as is.

## Afterwards i created a file nammed rootfsD (dynamic) and copied the generated files in the _install directory in busybox after generation

## Then i copied the libraries needed from the sysrood directory (created by using crosstool-ng) to rootfsD using the rsync command

## Then i created some directories that i will need during this process (sys, proc, etc, dev)

## Inside etc i created the init.d directory (which has the rcS and rcK inside) and the inittab script which contains the following code:

```
::sysinit:/etc/init.d/rcS
ttyAMA0::askfirst:-/bin/sh
::restart:/sbin/init
```

## Then i opened the rcS and configured it as follows (PLEASE DON"T FORGET TO MAKE IT AND THE rcK AN EXECUTABLE USING CHMOD)

```
#!/bin/sh

echo Hello Darkness My Old Friend

mount -t proc nodev /proc

mount -t sysfs nodev /sys

```

## Then i changed the ownership of the entire rootfsD to root:root using the chown command

## Finally i copied the rootfsD to the SD-card (rootfs partition and ran QEMU):

![Screenshot from 2024-01-29 14-17-25](https://github.com/omartarek376/Embedded-Linux/assets/111865747/731f51e2-bf7d-4fc0-adae-b17136e66c71)

## The steps for the static version is the same except for copying the sysroot from crosstool-ng.

