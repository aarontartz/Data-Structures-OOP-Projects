# COMPE-260 Assignment 1 - Classes: "Sphere Values"
## Description
This program calculates the radius, diameter, circumference, surface area, and
volume of a sphere with radius values specified by the programmer as either a radius value to initialize the sphere with, or radius values to later set the sphere to. This program does not accept user input, but can be easily altered to accept user input instead. This program is designed to not work with radius values that are negative, as it is physically impossible to have a tangible sphere with negative radius. If the radius is attempted to be initialized with a negative radius or set to a negative radius, the program will output an error message.
## Running on mac:
To run on mac, I type the following into terminal after putting these files into an Xcode project:
```
clang++ /Users/myName/myDirectory/driver.cpp -o program
```
Then, to run the program in terminal:
```
./program
```
## Output with driver.cpp:
```
Radius: 1
Diameter: 2
Circumference: 6.28319
Area: 12.5664
Volume: 4.18879

Radius: 3.5
Diameter: 7
Circumference: 21.9911
Area: 153.938
Volume: 179.594

Radius: 6
Diameter: 12
Circumference: 37.6991
Area: 452.389
Volume: 904.779
```
