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

/*defining member function
• Outside the class
*/

#include <iostream>
using namespace std;
class Employee {
private:
    int emp_id;
    string name;
    string address;
    float salary;
    string department;
public:
    void initialize();
    void display();
};

 void Employee::initialize() 
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Name: ";
        cin>>name;
        cout << "Enter Address: ";
        cin>>address;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Department: ";
        cin>>department;

    }

    void Employee::display() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }

int main() {
    Employee emp1;
    cout << "Enter Employee Details: ";
    emp1.initialize();
    emp1.display();

    return 0;
}