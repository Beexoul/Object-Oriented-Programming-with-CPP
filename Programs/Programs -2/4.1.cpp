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

    /* In main ( ) function create one object of class Employee and call member function to
    initialize and display the information of employee */

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
        Employee emp1;
        cout << "Enter Employee Details: "<<endl;
        emp1.initialize();
        cout << "Displaying Employee Details: "<<endl;
        cout << "--------------------------------------------------------"<<endl;
        emp1.display();

        return 0;
    }