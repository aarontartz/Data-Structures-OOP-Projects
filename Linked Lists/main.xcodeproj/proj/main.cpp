//
//  main.cpp
//  main
//
//  Created by Aaron Tartz on 3/28/23.
//

#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack numStack;
    int userNum;
    char userVal;
    
    // Input 7 numbers in list
    cout << "Insert 7 numbers, one at a time:\n" << endl;
    for (int i = 0; i < 7; ++i) {
        cin >> userNum;
        if ((userNum % 2) == 0) {
            numStack.StackPushBefore(userNum);
        }
        else {
            numStack.StackPushAfter(userNum);
        }
        cout << "List: ";
        numStack.Print(cout);
        cout << endl;
    }
    
    // Remove 3 numbers in list
    cout << "\nEnter H to remove the head value, enter T to remove the tail value of the stack:\n" << endl;
    for (int i = 0; i < 3; ++i) {
        cin >> userVal;
        while ((userVal != 'H') && (userVal != 'T')) {
            cout << "Invalid input, input H or T:\n" << endl;
            cin >> userVal;
        }
        if (userVal == 'H') {
            numStack.StackPopFront();
        }
        else {
            numStack.StackPopBack();
        }
        cout << "List: ";
        numStack.Print(cout);
        cout << endl;
    }
}
