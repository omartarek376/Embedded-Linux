#!/bin/bash
echo "The hostname is:" $(HOSTNAME)
echo "The username is:" $(whoami)

config_file="config.ini"

while [ 1 ]
do
echo ""
echo "Enter the keyword or type quit to exit:"
read key
	if [ "$key" = "quit" ]
	then
	break
	fi
	
	if [ "$key" = "database_url" ]
	then
		echo "Getting the database"
		value=$(grep "^$key=" "$config_file" | cut -d '=' -f2)
		echo $value


	elif [ "$key" = "username" ]
	then
		echo "Getting the username"
		value=$(grep "^$key=" "$config_file" | cut -d '=' -f2)
		echo $value


	elif [ "$key" = "password" ]
	then
		echo "Getting the password"
		value=$(grep "^$key=" "$config_file" | cut -d '=' -f2)
		echo $value


	elif [ "$key" = "debug_mode" ]
	then
		echo "Getting the debug mode"
		value=$(grep "^$key=" "$config_file" | cut -d '=' -f2)
		echo $value


	else
		echo "Invalid Key"
	fi
	done