/*-- Sphere.cpp---------------------------------------------------------
 
   This file implements the Sphere member functions.

----------------------------------------------------------------------*/

#include <iostream>
#include <cmath>
using namespace std;

#include "Sphere.h"

// default constructor: initializes radius to 1.0
Sphere::Sphere() : radius(1) {}

// explicit value constructor: initializes radius to value specified
Sphere::Sphere(double initRadius) {
    if (initRadius >= 0) {
        radius = initRadius;
    }
    else {
        cout << "Invalid initial values" << endl;
    }
}

// mutator function: sets value of radius data member
void Sphere::SetRadius(double radiusToSet) {
    if (radiusToSet >= 0) {
        radius = radiusToSet;
    }
    else {
        cout << "Can't set radius with this value" << endl;
    }
}

// accessor function 1: returns radius statistic
double Sphere::GetRadius() const {
    return (radius);
}

// accessor function 2: returns diameter statistic
double Sphere::GetDiameter() const {
    return (radius * 2);
}

// accessor function 3: returns circumference statistic
double Sphere::GetCircumference() const {
    return (2 * M_PI * radius);
}

// accessor function 4: returns area statistic
double Sphere::GetArea() const {
    return (4 * M_PI * pow(radius, 2));
}

// accessor function 5: returns volume statistic
double Sphere::GetVolume() const {
    return (4 * M_PI * pow(radius, 3) / 3);
}

// display and helper function: displays the radius, diameter, volume and area of the sphere on the output object specified
void Sphere::Display(ostream & os) const {
    os << "Radius: " << GetRadius() << endl;
    os << "Diameter: " << GetDiameter() << endl;
    os << "Circumference: " << GetCircumference() << endl;
    os << "Area: " << GetArea() << endl;
    os << "Volume: " << GetVolume() << endl;
    os << endl;
}

// non member function: overloads the << operator
ostream & operator<<(ostream & os, const Sphere & s) {
    s.Display(os);
    return os;
}
