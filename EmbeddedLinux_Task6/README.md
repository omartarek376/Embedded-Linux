# Steps:

## First we create a 1Gb file using the following command:

```
dd if=/dev/zero of=sd.img bs=1M count=1024
```

## Afterwards we use this command to divide the file into the 2 partitions that we want and specify the size,format,bootable and so on.:

```
cfdisk sd.img
```

![Screenshot from 2024-01-07 17-30-29](https://github.com/omartarek376/Embedded-Linux/assets/111865747/70e66ac0-b1ea-4c2e-96a3-94d5c1d87864)

## Then we use dev/loop in mount our file so that we can access it but first a quick explanation:

### /dev/loop is a device built into linux that can be used to treat files as block devices which allows us to mount them to our system as if they were a usb or an exteral hardrive and the most famouse case for using it is to mount iso images (like those found on cd or the iso image of ubuntu for example) so that we can access them and that is also what we are doing as our virtual sd card is pretty much an iso image

```
sudo losetup -f --show --partscan sd.img
```

## which created a loop that consists of 2 parts (1 for eqch partition) in a random empty loop device (for me it was 14)

## before we mount them we need to format the partitons propery and label them (the cfdisk didn't format them just created the partitions)

## Formating the FAT partition:

```
sudo mkfs.vfat -F 16 -n boot /dev/loop14p1
```

## Formating the Ext4 partition:

```
sudo mkfs.ext4 -L rootfs /dev/loop14p2
```

## We have succesfully created our virtual SD card and can mount it to our system

![Screenshot from 2024-01-07 17-37-45](https://github.com/omartarek376/Embedded-Linux/assets/111865747/814de705-e95e-4d0c-996d-862986d1cc3c)




