/* Write a program to implement a class Employee having following members

Datamembers: 
Emp_id: Employee ID
Name: Employee Name
Address: Employee Address
Salary: Employee Salary
Department:  Employee Department
Member functions:
initialize() : initialize information of employee
Display() : Display information of employee
*/ 

/* Modify the Program by creating three objects of class Employee. */

#include <iostream>
using namespace std;
class Employee {
private:
    int emp_id;
    string name;
    string address;
    float salary;
    string department;
    int i=0;

public:
    void initialize() 
    {
        cout << "Enter Employee ID: "<<endl;
        cin >> emp_id;
        cout << "Enter Name: "<<endl;
        cin>>name;
        cout << "Enter Address: "<<endl;
        cin>>address;
        cout << "Enter Salary: "<<endl;
        cin >> salary;
        cout << "Enter Department: "<<endl;
        cin>>department;

    }

    void display() {

        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};
int main() {
    Employee emp1,emp2,emp3;
    cout << "Enter Employee Details: "<<endl;
    cout << "Employee 1 Details: "<<endl;
    emp1.initialize();
    cout << "Employee 2 Details: "<<endl;
    emp2.initialize();
    cout << "Employee 3 Details: "<<endl;
    emp3.initialize();
    cout << "Display Employee Details: "<<endl;
    cout << "Employee 1 Details: "<<endl;
    emp1.display();
    cout << "Employee 2 Details: "<<endl;
    emp2.display();
    cout << "Employee 3 Details: "<<endl;
    emp3.display();

    return 0;
}