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

#### a)The first cat is not being directed anywhere, and it's not connected to a command that consumes its output, the second cat essentially just reads from filename2 without any apparent effect replace it with "car file1 file2".

#### b) 
