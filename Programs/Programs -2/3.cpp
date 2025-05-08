/* 
Write a program to create a structure in C++ named Hospital giving details about the patient
admitted. Details are:
• Patient name
• Age
• Gender
• Nature of illness
 Now, modify Que no. 2 for 50 Patients. (Implement concept of array of structure)
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
    Hospital h[50];
    int n,i;
    cout << "Enter Detais of Patients" << endl;
    for(i=0;i<50;i++){
        cout << i+1 << endl;
        cout << "Enter Patient Name: " << endl;
        cin >> h[i].patient_name;
        fflush(stdin);
        cout << "Enter Age: " << endl;
        cin >> h[i].age;
        fflush(stdin);
        cout << "Enter Date of Birth (dd mm yyyy): " << endl;
        cin >> h[i].dob.day >> h[i].dob.month >> h[i].dob.year;
        fflush(stdin);
        cout << "Enter Gender: " << endl;
        cin >> h[i].gender;
        fflush(stdin);
        cout << "Enter Nature of Illness: " << endl;
        cin >> h[i].nature_of_illness;
        fflush(stdin);

    }
    cout << "Detais of Patients" << endl;
    for(i=0;i<50;i++){

    cout<< "------------------------" << endl;
    cout << "Patient Name: " << h[i].patient_name << endl;
    cout << "Age: " << h[i].age << endl;
    cout << "Date of Birth: " << h[i].dob.day << "/" << h[i].dob.month << "/" << h[i].dob.year << endl;
    cout << "Gender: " <<h[i].gender << endl;
    cout << "Nature of Illness: " << h[i].nature_of_illness << endl;
    
    }
    return 0;
}
