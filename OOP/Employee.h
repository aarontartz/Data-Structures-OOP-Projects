//
//  Employee.h
//  main
//
//  Created by Aaron Tartz on 4/25/23.
//

#ifndef Employee_h
#define Employee_h

#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string employee_name;
    int employee_id;
    char employee_class;
    double employee_salary;
    
public:
    virtual void calculate_salary(double profit) {}
    
    virtual void display() { //print this for each of the below classes
        cout << employee_name << endl;
        cout << "ID: " << employee_id << endl;
        cout << "Class: " << employee_class << endl;
        cout << "Salary: $" << employee_salary << endl;
    }
};

class Owner : public Employee {
public:
    Owner(string employee_name, int employee_id) {
        this->employee_name = employee_name;
        this->employee_id = employee_id;
        employee_class = 'O';
    }
    
    void calculate_salary(double profit) {
        employee_salary = 15000 + (0.6 * profit);
    }
    
    void display() { //overriding Employee class
        Employee::display();
        cout << "Base Salary: $15000" << endl;
        cout << "Shares Profit: $" << employee_salary - 15000 << endl;
    } //print for Owner
};

class Chef : public Employee {
private:
    string chef_cuisine;
    
public:
    Chef(string employee_name, int employee_id, string chef_cuisine) {
        this->employee_name = employee_name;
        this->employee_id = employee_id;
        employee_class = 'C';
        this->chef_cuisine = chef_cuisine;
    }
    
    void calculate_salary(double profit) {
        employee_salary = 10000 + (0.2 * profit);
    } //calculating total salary ^
    
    void display() { //overriding Employee class
        Employee::display();
        cout << "Base Salary: $10000" << endl;
        cout << "Shares Profit: $" << employee_salary - 10000 << endl;
        cout << "Cuisine/Expertise: " << chef_cuisine << endl;
    }
};

class Waiter : public Employee {
private:
    int waiter_years;
    int waiter_tips;
    
public:
    Waiter(string employee_name, int employee_id, int waiter_years) {
        this->employee_name = employee_name;
        this->employee_id = employee_id;
        employee_class = 'W';
        this->waiter_years = waiter_years;
    }
    
    void calculate_salary(double waiter_tips) {
        this->waiter_tips = waiter_tips;
        employee_salary = 3000 + waiter_tips;
    } //calculating total salary ^
    
    void display() { //overriding Employee class
        Employee::display();
        cout << "Base Salary: $3000" << endl;
        cout << "Tips: $" << waiter_tips << endl;
        cout << "Years of Service: " << waiter_years << endl;
    }
};

#endif /* Employee_h */
