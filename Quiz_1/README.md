## Explanation

Here in this quiz we need to create a .sh file to get a keyword from the user and use it to search a config.ini file for said keyword and return the value stored in it and if the keyword isn't there inform the user of that.

Here is some output photos to test the validity of the code:

![Screenshot 2023-12-04 165616](https://github.com/omartarek376/Embedded-Linux/assets/111865747/82ce3fbd-d94b-4d37-8972-f6a4105be735)

![Screenshot 2023-12-04 165706](https://github.com/omartarek376/Embedded-Linux/assets/111865747/fed800b8-237b-4ec7-9281-884eb29c6b14)

Finally i will explain the main search function used inside the code:  

value=$(grep "^$key=" "$config_file" | cut -d '=' -f2)

First i search the config.ini file for a line that starts with the keyword in it then afterwards i pass the output to the cut function that removes any part of the line before the "=" sign 
using -d to specify the delimiter and -f2 to specify that we only want the part after the "=" as the output of this operation which is then finally stored in the variable
named value.
