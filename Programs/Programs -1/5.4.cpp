/*
Write a program to calculate simple interest amount for deposit amount (P) kept in bank for (n) years at 
the rate of (r) simple interest per annum by implementing following categories of function. 

Function with no arguments and no return value
*/

#include <iostream>
using namespace std;
float simpleInterest ();
float simpleInterest (){
    float amount, rate, year, interest;
    cout << "Enter the principal amount : ";
    cin >> amount;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the number of years : ";
    cin >> year;
    interest = (amount * rate * year) / 100;
    cout << "The simple interest is: " << interest << endl;
    return 0;
}
int main(){
    float result;
    result = simpleInterest();
    return 0;
}