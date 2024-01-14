# Explanation

## First i installed tftp on my host machine

## Then i created the following script which will be passed to qemu in order to set a tftp connection between it and my host machine:

```
#!/bin/sh
ip a add 10.145.14.175/24 dev $1
// replace the ip address written above with the one that is shown after executing the 'ip addr' command in a terminal
ip link set $1 up
```

## Afterwards i created a couple of variable on u-boot to make the next step more abstract:

```
setenv dtb_filename vxpress.dtb (replace with actual .dtb file name)
setenv image_name Zimage (replace with actual image file name)
setenv kernel_load_cmd "fatload mmc 0:1 ${kernel_addr_r} ${image_name}"
setenv kernel_load_tftp_cmd "tftp ${kernel_addr_r} ${image_name}"
setenv fdt_load_cmd "fatload mmc 0:1 ${fdt_addr_r} ${dtb_filename}"
setenv fdt_load_tftp_cmd "tftp ${fdt_addr_r} ${dtb_filename}"

//finally the ip commands
setenv serverip 10.145.14.175 (insert your pc's ip address here instead)
setenv ipaddr 10.145.14.176 (insert an ip address for qemu but it should have the same subnet 10.145.14.X)
```

## The variables kernel_addr_r and fdt_addr_r are predefined in u-boot so i left them as is but feel free to modify them if needed.

## Then i relaunched qemu with the new command:

```
sudo qemu-system-arm -M vexpress-a9 -m 128M -nographic -kernel ~/u-boot/u-boot -sd sd.img -net nic -net tap,script=./qemu-ifup
```

## Now to automate the previous process i modified the bootcmd command to first check if there is an image and .dtb over tftp if found load them into the ram and boot them using zboot command.
## If not found load the image and .dtb found in the FAT partion.
## If not found produce an error message

```
setenv bootcmd 'echo Checking for image over TFTP; if run kernel_load_tftp_cmd && run fdt_load_tftp_cmd; then echo "Image found over tftp"; bootz ${kernel_addr_r} - ${fdt_addr_r}; else echo "Failed to load kernel or DTB from TFTP"; echo "Loading from FAT instead"; if run kernel_load_cmd && run fdt_load_cmd; then bootz ${kernel_addr_r} - ${fdt_addr_r}; else echo "Failed to load kernel or DTB from FAT"; fi; fi'
```

## Here are screenshots of launching u-boot and it finding the image and .dtb file over tftp:

![Screenshot from 2024-01-14 11-14-07](https://github.com/omartarek376/Embedded-Linux/assets/111865747/7ae1e05e-5093-4aa6-9707-2347b67473a6)

![Screenshot from 2024-01-14 11-14-40](https://github.com/omartarek376/Embedded-Linux/assets/111865747/1a8fe065-4142-4dd6-8d34-260950189573)

## Here are screenshots of launching u-boot and it finding the image and .dtb file over FAT instead:

![Screenshot from 2024-01-14 11-17-29](https://github.com/omartarek376/Embedded-Linux/assets/111865747/305568e9-ad5c-4d2d-85d7-305672fd1ac9)

![Screenshot from 2024-01-14 11-17-54](https://github.com/omartarek376/Embedded-Linux/assets/111865747/ad7617bd-53b9-4838-b45c-ed31cc6ad02e)






 
