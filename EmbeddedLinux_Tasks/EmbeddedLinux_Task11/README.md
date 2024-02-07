# Explanation

## For anyone interested:

The qemu-ifup file that we created in the tftp task is vital in this task aswell. and for those who don't know it functionality it creates sort of a netowrk interface on your pc (as if you are connected to a router and you gave yourself the ip address that you desire) it also allows us to ping other ip addresses with the same sub net (192.168.0.xxx in my case) so for clarification i will show in details the steps that i took.

## First i modified the qemu-ifup to be as follows:

```
#!/bin/sh
ip a add 192.168.0.67/24 dev $1
ip link set $1 up
```

you can change the 67 to what ever you desire and this will be your pc's ip address

## Afterwards i install nfs-server using the following command:

```
sudo apt install nfs-kernel-server
```

## Then modify the /etc/exports file to be as follows

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/15f80c0f-cad1-4369-b53f-857f92883484)

Change the directory from /home/omar/rootfsD to wherever the rootfs that will be mounted using the nfs

Here is the command if you want to copy it:

```
/home/omar/rootfsD       *(rw,sync,no_root_squash,no_subtree_check)
```

## Afterwards make nfs reload the file using the following command:

```
sudo exportfs -r
```

## Afterwards run QEMU using the following command(change directories depending on where the files are)

```
sudo qemu-system-arm -M vexpress-a9 -m 128M -nographic -kernel ~/u-boot/u-boot -sd sd.img -net tap,script=./qemu-ifup -net nic
```

## Cancel the autoboot because we will be modifying some enviroment variables:

```
setenv ipaddr 192.168.0.13
```

you can change the 13 to whatever you like

```
setenv serverip 192.168.0.67
```

same as the tap script (qemu-ifup file)

```
setenv bootargs 'console=ttyAMA0  root=/dev/nfs ip=192.168.0.13:::::eth0 nfsroot=192.168.0.67:/home/omar/rootfsD,nfsvers=3,tcp rw init=/sbin/init'
```

ip same as ipaddr and nfsroot same as serverip and the tap script
change the directory to where the rootfs is on your system

```
saveenv
```

PLEASE save your changes to the enviroment variables

## Finally you can restart QEMU or run bootd and the kernel should open

![image](https://github.com/omartarek376/Embedded-Linux/assets/111865747/89ef892f-4648-40cb-92c9-78dc16ec8740)

i added a NFS file to make sure i loaded the correct rootfs through the nfs and not the one on the sd card :)


