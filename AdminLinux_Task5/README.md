# Explanation

### 1)
cd
mkdir myteam
sudo chmod 075 myteam

### 2) 
su fady
cd /home/omar/myteam

### 3) 
it works fine as the default permissions for a directory for others is read and execute

![Screenshot from 2023-12-10 21-59-17](https://github.com/omartarek376/Embedded-Linux/assets/111865747/9f4e45f4-d328-4d61-b69d-2e06b0ae8e73)

### 4)

#### a)

chmod 631 oldpassed

or

chmod u=rw,g=wx,o=x oldpasswd

#### b) & c)

sadly we cannot make our default permissions be as above as for files you cannot set them to execute by defualt even when changing the umask value
(for example a umask of 0000 equates to rw- rw- rw- for files and rwx rwx rwx for directories) and the default for files is rw- rw- r and for folders its
rwx rwx r-x

#### d)
![Screenshot from 2023-12-10 22-43-41](https://github.com/omartarek376/Embedded-Linux/assets/111865747/91d05800-6d4a-4e50-8279-536a81c1a1b6)

#### e)
yes the root can access said file and any user that has the sudo group (except for cd as it doesn't work with sudo)

![Screenshot from 2023-12-10 22-46-42](https://github.com/omartarek376/Embedded-Linux/assets/111865747/281a3630-4ce0-40c7-9ff0-20e01ed8d92b)

### 5)
when i try and edit it with vi it gives me ('readonly' option is set use ! to override) and when i try to override it it fails as 444 means r r r 
so it is set for read only but when i try to remove it it gets removed as the remove command relies on the directory's permissions not the file's

### 6)
For files, the "x" permission allows a user to execute the file if it is an executable program or script. 

For directories, the "x" permission has a different meaning. Without the "x" permission, 
users won't be able to access its contents or navigate into it, even if they have read ("r") permission on the directory.
