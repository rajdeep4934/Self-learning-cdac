#include<iostream>
using namespace std;
string companyName = "Tech Solutions Ltd";                                  // Global variable
class Employee                                                              // Employee class
 {
private:
    int empId;
    string name;
    double salary;

public:
    static int totalEmployees;                                               // Static data member                                               
    Employee(int id, string n, double s)                                     // Constructor
    {
        empId = id;
        name = n;
        salary = s;
        totalEmployees++;                                                    // Increment each time object is created
    }
    void display()                                                          // Display function
    {
        cout << "Company Name: " << companyName << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "------------------------" << endl;
    }

    static void showTotalEmployees()                                           // Static function
    {
        cout << "Total Employees: " << totalEmployees << endl;
    }
};

int Employee::totalEmployees = 0;                                               // Initialize static member
int main() 
{
    Employee e1(101, "Amit", 50000);
    Employee e2(102, "Neha", 60000);
    Employee e3(103, "Rahul", 55000);
    Employee e4(104, "Priya", 65000);
    Employee e5(105, "Karan", 70000);

    e1.display();                                                                // Display employee details
    e2.display();
    e3.display();
    e4.display();
    e5.display();

    Employee::showTotalEmployees();                                             // Show total employees

    return 0;
}