/* 
Write a program to create a structure in C++ named Hospital giving details about the patient
admitted. Details are:
• Patient name
• Age
• Gender
• Nature of illness
*/

#include <iostream>
#include <string>
using namespace std;
struct Hospital {
    string patientName;
    int age;
    string gender;
    string natureOfIllness;
};
int main() {
    Hospital patient;
    
    cout << "Enter patient name: ";
    getline(cin, patient.patientName);
    
    cout << "Enter age: ";
    cin >> patient.age;
    
    cout << "Enter gender: ";
    getline(cin, patient.gender);
    cout << "Enter nature of illness: ";
    getline(cin, patient.natureOfIllness);
    cout << "\nPatient Details:\n";
    cout << "Name: " << patient.patientName << endl;
    cout << "Age: " << patient.age << endl;
    cout << "Gender" << patient.gender << endl;
    cout << "Nature of Illness: " << patient.natureOfIllness << endl;

    return 0;
}


