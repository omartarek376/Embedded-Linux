#!/bin/bash

cd
mkdir myDirectory
mkdir myDirectory/secondDirectory
cd myDirectory/secondDirectory
touch myNotePaper
cp myNotePaper ../myNotePaper
cd ..
mv myNotePaper myOldNotePaper
