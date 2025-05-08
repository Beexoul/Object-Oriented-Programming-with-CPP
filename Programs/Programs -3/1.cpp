/* Write a Program to find sum of two complex number by passing object as an argument and not returning object as an argument.. */
#include <iostream>
using namespace std;
class Complex {
    private:
        float real;
        float imag;
    public:
        void setData() {
            cin>>real>>imag;
        }
        void showData() {
            cout << "Sum of two complex numbers: ";
            cout << real <<"+"<< "i"<<imag << endl;
        }
        void addComplex(Complex c) {
            real += c.real;
            imag += c.imag;
        }
};
int main() {
    Complex c1, c2;
    cout << "Enter real and imaginary part of first complex number: ";
    c1.setData();
    cout << "Enter real and imaginary part of second complex number: ";
    c2.setData();
    c1.addComplex(c2);
    cout << "Sum of two complex numbers: ";
    c1.showData();
    
    return 0;
}