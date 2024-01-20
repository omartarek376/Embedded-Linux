#!/bin/bash


if [ -f "$HOME/.bashrc" ]; then
    echo "export HELLO=$HOSTNAME" >> "$HOME/.bashrc"
    echo "LOCAL=$(whoami)" >> "$HOME/.bashrc"
    gnome-terminal 
else
    echo "Error: .bashrc file not found in $HOME directory."
fi

