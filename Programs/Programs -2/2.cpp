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
struct Hospital{

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
        

};
int main(){
    Hospital h;
    cout << "Enter Patient Details: " << endl;
    cout << "Enter Patient Name: " << endl;
        cin >> h.patient_name;
        fflush(stdin);
        cout << "Enter Age: " << endl;
        cin >> h.age;
        fflush(stdin);
        cout << "Enter Date of Birth (dd mm yyyy): " << endl;
        cin >> h.dob.day >> h.dob.month >> h.dob.year;
        fflush(stdin);
        cout << "Enter Gender: " << endl;
        cin >> h.gender;
        fflush(stdin);
        cout << "Enter Nature of Illness: " << endl;
        cin >> h.nature_of_illness;
        fflush(stdin);
        

    cout << "Patient Details: " << endl;
    cout << "------------------------" << endl;
    cout << "Patient Name: " << h.patient_name << endl;
    cout << "Age: " << h.age << endl;
    cout << "Date of Birth: " << h.dob.day << "/" << h.dob.month << "/" << h.dob.year << endl;
    cout << "Gender: " <<h.gender << endl;
    cout << "Nature of Illness: " << h.nature_of_illness << endl;
    return 0;
}