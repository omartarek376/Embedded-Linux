# Steps

## 1) Installed u-boot and configured it as follows:

![Screenshot from 2024-01-11 12-53-13](https://github.com/omartarek376/Embedded-Linux/assets/111865747/ca07421f-eaed-4cfd-a9d6-dc757528b655)

![Screenshot from 2024-01-11 12-53-23](https://github.com/omartarek376/Embedded-Linux/assets/111865747/a9676cfb-a884-4cef-8545-7e5b070c4328)

![Screenshot from 2024-01-11 12-55-44](https://github.com/omartarek376/Embedded-Linux/assets/111865747/335633b7-83e4-4bba-9c98-4ff1d0bd40c1)

![Screenshot from 2024-01-11 12-59-50](https://github.com/omartarek376/Embedded-Linux/assets/111865747/f3843923-6b3a-4184-aa32-5bce9e6e5851)

## 2) Installed qemu using the following command:

```
sudo apt install qemu-system-arm
```

## 3) Copied the u-boot the the boot parition of the ssd and ran qemu and tried playing around with it a bit:

![Screenshot from 2024-01-11 13-00-38](https://github.com/omartarek376/Embedded-Linux/assets/111865747/e38b968d-d55d-475f-87c8-7e2200e9f5c2)

## 4) I then copied an app that was created and put it in thwe ram inside qemu to emulate running an app on the mcu and here is how i did it:

### First i copied the app to the rootfs partiton in the sdcard (as apps should be in the root not the boot)

### Then i copied the binary file into the ram (starts at 0x60000000) using the following command:

```
ext4load mmc 0:2 0x60000000 calc_bin
```

### here is the output of these operations:

![Screenshot from 2024-01-11 13-31-24](https://github.com/omartarek376/Embedded-Linux/assets/111865747/7b4c7e70-e3aa-4edd-90a8-9064de13acba)


