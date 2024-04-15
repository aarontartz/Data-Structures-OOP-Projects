/*-- Sphere.h ----------------------------------------------------------

 This header file defines the data type Sphere.
 Basic operations are:
 
    Default constructor -- Initializes radius to 1.0
    Explicit-value constructor
 
    display:    To display the radius, diameter, circumference, area, and volume
    <<:         Output operator
    accessors:  GetRadius, GetDiameter, GetCircumference, GetArea, GetVolume
    SetRadius:  To set the radius

----------------------------------------------------------------------*/
#include <iostream>
using namespace std;

#ifndef Sphere_h
#define Sphere_h

class Sphere {
    public:
        Sphere();                           // default constructor: initializes radius to 1.0
        Sphere(double initRadius);          // explicit value constructor: initializes radius to value specified
        void SetRadius(double initRadius);  // mutator function: sets value of radius data member
        double GetRadius() const;           // accessor function 1: returns radius statistic
        double GetDiameter() const;         // accessor function 2: returns diameter statistic
        double GetCircumference() const;    // accessor function 3: returns circumference statistic
        double GetArea() const;             // accessor function 4: returns area statistic
        double GetVolume() const;           // accessor function 5: returns volume statistic
        void Display(ostream & out) const;  // display and helper function: displays the radius, diameter, volume and area of the sphere on the output object specified
    private:
        double radius;                      //double variable "radius"
};

ostream & operator<<(ostream & os, const Sphere & s);   // non member function: overloads the << operator

#endif
