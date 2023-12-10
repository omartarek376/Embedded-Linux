# Na2na2a

### 1)
sudo groupadd -g 30000 "pgroup"

### 2)
sudo passwd -l "insert user account to be locked here"

### 3)
sudo userdel -r "insert user account to be deleted here"

the -r to remove his home directory if it exists.

### 4)
sudo groupdel "insert group to be deleted here"

### 5)
the main difference is that adduser runs a scripts that relies on useradd and adds extra functionality such as automatically creating a new home directory
and setting the password of the user among other things ex:

## sudo adduser example_user

while useradd is more rudimentary and needs explicit parameters to be passed to it in order to properly set up the user ex:

## sudo useradd -m -s /bin/bash example_user

here the -m creates a home directory for the user and -s specifies the type of shell the user will user (here it is specified as bash).
