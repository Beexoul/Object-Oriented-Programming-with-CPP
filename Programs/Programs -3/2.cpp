/* Write a Program to find sum of two complex number by passing and returning object as an argument. */
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
        Complex addComplex(Complex c1, Complex c2) { 
            Complex temp;
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
            return temp;
        }
};

int main() {
    Complex c1, c2, c3;
    
    c1.setData();
    c2.setData();
    c3.addComplex(c1,c2); 
    c3.showData();
    return 0;
}
