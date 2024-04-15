# COMPE-260 Assignment 2: Linked Lists
## Description
This program first prompts the user to enter 7 numbers. If the number inputted is
even, the program pushes the number into the front of a linked list, and if the number is
odd, the program pushes the number into the back of a linked list. After prompting the
user to enter 7 numbers, the program then prompts the user to remove 3 numbers. This
program allows the user to choose which end of the list he wants to remove: the head
end with the even numbers or the tail end with the odd numbers, by prompting the user
to enter the character “H” for the head end, and “T” for the tail end. This program does
not have a separate driver.cpp file, and relies on solely user input. Furthermore, when
prompting the user to input the 7 numbers into the linked list, this program is unable to
detect if the inputs are integers. However, this program will detect if the user enters any
other value other than “H” or “T” during when it is asking the user to remove values from
the list, and will repeatedly ask the user to enter a different input until the user enters a
valid input.
### Running on mac:
To run on mac, I type the following into terminal after putting these files into an Xcode project:
```
clang++ /Users/myName/myDirectory/main.cpp -o program
```
Then, to run the program in terminal:
```
./program
```
