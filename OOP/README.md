# COMPE-260 Assignment 3 - OOP: "Restaurant Employee Database"
## Description
This program first prompts the user to enter the profit the restaurant has made,
along with the amount of tips each of the three waiters received. Using set values for
the employee’s name, ID, class, base salary, cuisine/expertise, and years of experience,
the program uses inheritance and polymorphism to use and print the correct functions
that correlate with each of the pointers’ objects (either Owner, Chef, or Waiter). This was
also achieved by iterating through an array of pointers that point to Employee objects.
This program will work with any value for the employee’s name, ID, class, base salary,
etc. as long as they are of the correct type, which can all be changed within the
driver.cpp file. This program also works with negative values, and just like the real
world, will take away from the total salary of some of the employees if the restaurant
has a negative profit margin for a given month. This program is limited in that it is not
able to detect negative tips, as negative tips are not possible in the real world (unless
maybe someone stole from the waiter’s wallet without them realizing). Furthermore, if
this program was more realistic, if the restaurant had a negative profit margin in a given
month, instead of just the owner’s and chefs’ paychecks, it would likely also take money
out of the waiters’ paychecks as well, which it does not do.
## Running on macOS
To run on mac, I type the following into terminal after putting these files into an Xcode project:
```
clang++ /Users/myName/myDirectory/driver.cpp -o program
```
Then, to run the program in terminal:
```
./program
```
## Sample outputs with driver.cpp
### Output 1
```
Enter month's profit: 6000
Enter waiter #1's tips: 1000
Enter waiter #2's tips: 1500
Enter waiter #3's tips: 1700

Aaron
ID: 826559013
Class: O
Salary: $18600
Base Salary: $15000
Shares Profit: $3600

Nick
ID: 2
Class: C
Salary: $11200
Base Salary: $10000
Shares Profit: $1200
Cuisine/Expertise: Italian

Ricky
ID: 3
Class: C
Salary: $11200
Base Salary: $10000
Shares Profit: $1200
Cuisine/Expertise: French

Ethan
ID: 4
Class: W
Salary: $4000
Base Salary: $3000
Tips: $1000
Years of Service: 3

Kolten
ID: 5
Class: W
Salary: $4500
Base Salary: $3000
Tips: $1500
Years of Service: 5

Jacob
ID: 6
Class: W
Salary: $4700
Base Salary: $3000
Tips: $1700
Years of Service: 7
```
### Output 2
```
Enter month's profit: -1000
Enter waiter #1's tips: 500
Enter waiter #2's tips: 700
Enter waiter #3's tips: 1000

Aaron
ID: 826559013
Class: O
Salary: $14400
Base Salary: $15000
Shares Profit: $-600

Nick
ID: 2
Class: C
Salary: $9800
Base Salary: $10000
Shares Profit: $-200
Cuisine/Expertise: Italian

Ricky
ID: 3
Class: C
Salary: $9800
Base Salary: $10000
Shares Profit: $-200
Cuisine/Expertise: French

Ethan
ID: 4
Class: W
Salary: $3500
Base Salary: $3000
Tips: $500
Years of Service: 3

Kolten
ID: 5
Class: W
Salary: $3700
Base Salary: $3000
Tips: $700
Years of Service: 5

Jacob
ID: 6
Class: W
Salary: $4000
Base Salary: $3000
Tips: $1000
Years of Service: 7
```
### Output 3
```
Enter month's profit: 1234
Enter waiter #1's tips: 56
Enter waiter #2's tips: 78
Enter waiter #3's tips: 90

Aaron
ID: 826559013
Class: O
Salary: $15740.4
Base Salary: $15000
Shares Profit: $740.4

Nick
ID: 2
Class: C
Salary: $10246.8
Base Salary: $10000
Shares Profit: $246.8
Cuisine/Expertise: Italian

Ricky
ID: 3
Class: C
Salary: $10246.8
Base Salary: $10000
Shares Profit: $246.8
Cuisine/Expertise: French

Ethan
ID: 4
Class: W
Salary: $3056
Base Salary: $3000
Tips: $56
Years of Service: 3

Kolten
ID: 5
Class: W
Salary: $3078
Base Salary: $3000
Tips: $78
Years of Service: 5

Jacob
ID: 6
Class: W
Salary: $3090
Base Salary: $3000
Tips: $90
Years of Service: 7
```
