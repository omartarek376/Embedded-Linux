#!/bin/bash

USERNAME="fady"
GROUPNAME="fady_group"

if id "$USERNAME" &>/dev/null				#Checking if the user already exists
then
    echo "User '$USERNAME' already exists."
else

    sudo useradd "$USERNAME"
    echo "User '$USERNAME' created."
fi


if getent group "$GROUPNAME" &>/dev/null		#checking if the group already exists
then
    echo "Group '$GROUPNAME' already exists."
    
    
else
    sudo groupadd "$GROUPNAME"
    echo "Group '$GROUPNAME' created."
    sudo usermod -aG "$GROUPNAME" "$USERNAME"
    echo "User '$USERNAME' added to group '$GROUPNAME'."
fi


echo -e "\nUser Information:"				#displaying user information
id "$USERNAME"


echo -e "\nGroup Information:"			#displaying group information
getent group "$GROUPNAME"
