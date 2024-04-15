//
//  main.cpp
//  main
//
//  Created by Aaron Tartz on 3/28/23.
//

#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    double profit = 0;
    double tips[3];
    
    Employee* employee[6];
    employee[0] = new Owner("Aaron", 826559013);
    employee[1] = new Chef("Nick", 2, "Italian");
    employee[2] = new Chef("Ricky", 3, "French");
    employee[3] = new Waiter("Ethan", 4, 3);
    employee[4] = new Waiter("Kolten", 5, 5);
    employee[5] = new Waiter("Jacob", 6, 7);
    
    cout << "Enter month's profit: ";
    cin >> profit;
    
    for (int i = 0; i < 3; i++) {
        cout << "Enter waiter #" << i + 1 << "'s tips: ";
        cin >> tips[i];
    }
    
    for (int i = 0; i < 6; i++) {
        if (i <= 2) {
            employee[i]->calculate_salary(profit);
        }
        else {
            employee[i]->calculate_salary(tips[i - 3]);
        }
        cout << endl;
        employee[i]->display();
    }
    
    return 0;
}
