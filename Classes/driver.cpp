//--- Test driver for class Sphere

#include <iostream>
#include <cmath>
using namespace std;

#include "Sphere.h"

int main() {
    Sphere sphere1;         // default constructor: initializes radius to 1.0
    cout << sphere1;
    
    Sphere sphere2(3.5);    // explicit value constructor: initializes radius to value specified
    cout << sphere2;
    
    sphere2.SetRadius(6.0); // mutator function: sets radius value to value specified in argument
    cout << sphere2;
    
    return 0;
}
