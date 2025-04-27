/*
Write a program to calculate simple interest amount for deposit amount (P) kept in bank for (n) years at 
the rate of (r) simple interest per annum by implementing following categories of function. 

Function with arguments but no return value
*/

#include <iostream>
using namespace std;
float simpleInterest(float p, float r, float n) 
{
    float interest;
    interest = (p * r * n) / 100;
    cout << "The simple interest is: " << interest << endl;

return 0;
}

int main(){
    float amount, rate, year;
    cout << "Enter the principal amount : ";
    cin >> amount;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the number of years : ";
    cin >> year;
    simpleInterest(amount, rate, year);

    return 0;
}