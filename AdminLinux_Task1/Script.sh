#!/bin/bash

cd
mkdir myDirectory/secondDirectory
cd myDirectory/secondDirectory
touch myNotePaper.txt
cp myNotePaper.txt ../myNotePaper.txt
cd ..
mv myNotePaper.txt myOldNotePaper.txt