/* 
Write a program to create a structure in C++ named Hospital giving details about the patient
admitted. Details are:
• Patient name
• Age
• Gender
• Nature of illness
Modify Que no. 1 by adding data member Date of Birth (Implement concept of nested structure)
*/
#include <iostream>
using namespace std;
class Hospital
{
private:
    string patient_name;
    int age;
    string gender;
    string nature_of_illness;
    struct Date
    {
        int day;
        int month;
        int year;
    } dob;
public:
    void initialize()
    {
        cout << "Enter Patient Name: " << endl;
        cin >> patient_name;
        fflush(stdin);
        cout << "Enter Age: " << endl;
        cin >> age;
        fflush(stdin);
        cout << "Enter Date of Birth (dd mm yyyy): " << endl;
        cin >> dob.day >> dob.month >> dob.year;
        fflush(stdin);
        cout << "Enter Gender: " << endl;
        cin >> gender;
        fflush(stdin);
        cout << "Enter Nature of Illness: " << endl;
        cin >> nature_of_illness;
        fflush(stdin);
        
    }
    void display()
    {
        cout << "Patient Name: " << patient_name << endl;
        cout << "Age: " << age << endl;
        cout << "Date of Birth: " << dob.day << "/" << dob.month << "/" << dob.year << endl;
        cout << "Gender: " <<gender << endl;
        cout << "Nature of Illness: " << nature_of_illness << endl;
    }
};
int main(){
    Hospital h;
    cout << "Enter Patient Details: " << endl;
    h.initialize();
    cout << "Patient Details: " << endl;
    h.display();
    return 0;
}