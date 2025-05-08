/* 3. Write a program to find sum of two complex number, function call by one object passing second object
as function argument and return third object adding two objects. Hint: c3=c1.addComplex(c2); */

#include <iostream>
using namespace std;
class Complex {
    private:
        float real;
        float imag;
    public:
        void setData() {
            cout << "Enter real and imaginary: ";
            cin >> real >> imag;
        }
        void showData() {
            cout << "Sum of two complex numbers: ";
            cout << real <<"+"<< "i"<<imag << endl;
        }
        Complex addComplex(Complex c) { 
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
};
int main() {
    Complex c1, c2, c3;
    
    c1.setData();
    c2.setData();
    c3 = c1.addComplex(c2); 
    c3.showData();
    
    return 0;
}
