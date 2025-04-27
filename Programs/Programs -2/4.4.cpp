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

/* Modify the Program by creating  array of object . */

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
    Employee emp[50];
    int n;
    cout << "Enter number of employees: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout << "Employee "<<i+1<<" Details: "<<endl;
        emp[i].initialize();
    }
    for(int i=0;i<n;i++)
    {
        cout << "Employee "<<i+1<<" Details: "<<endl;
        emp[i].display();
    }
 
 
    return 0;
}