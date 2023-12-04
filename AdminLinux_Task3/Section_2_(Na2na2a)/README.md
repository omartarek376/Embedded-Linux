# NA2NA2A

### 1)
if you mean by user commands all teh commands that the user has written in the terminal use:

history > /tmp/commands.list

if you mean to list all possible commands you may use the command: 

compgen -c > /tmp/commands.list

### 2)
This can be done e editing the .profile and adding the line: 

echo "Welcome! Today is $(date)"

If you want to permenantly change the prompt you can do so by modifying the PS1 variable for example to make it show date and time edit it to be like so : 

PS1='\[\e[1;32m\]\u@\h \[\e[1;34m\]\w \[\e[0m\]\[\e[1;31m\]\D{%Y-%m-%d %H:%M:%S}\[\e[0m\]\n$ '

### 3)
To find the number of words in a file you can use the following command: 

wc -w filename

To find the number of files in a directory you can use ls and pass the output to wc as follows:

ls -1 | wc -l

(-1 to list files line by line and -l to count lines isntead of (-w) words)

#### a) to count user commands use history followed by ec as follows:

history | wc -l

### 4)

#### a) The first cat is not being directed anywhere, and it's not connected to a command that consumes its output, the second cat essentially just reads from filename2 without any apparent effect replace it with "car file1 file2".

#### b) The problem here is that rm expects filenames as arguments, not the output from ls. If you run ls | rm, it won't remove the files listed by ls; instead, it will try to remove the standard input stream, which can have unintended consequences to fix that use "ls | xargs rm".

#### c) the command "ls /etc/passwd | wc –l" won't work as passed is a file not a directory and will only output 1, instead use "wc -l /etc/passwd"

### 5) sudo find / -type f -name ".profile"

### 6)

### 7) 
sudo ln -s /etc/passwd /boot/passwd_softlink

### 8) 
"sudo ln /etc/passwd /boot/passwd_hardlink" and yes it will work as both directories are in the same file system.

### 9) 
When you enter a backslash (\) at the end of a line and press Enter, the shell interprets it as a line continuation character. It's expecting you to continue the command on the next line. The > is not a prompt; it's a continuation prompt indicating that the shell is waiting for you to complete the command.

if you want to change it from > to : you can do so by modifying the PS2 variable in the .bashrc file
