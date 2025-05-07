/* Write a Program to find sum of two complex number by passing object as an argument and not returning object as an argument.. */
#include <iostream>
using namespace std;
class Complex {
    private:
        float real;
        float imag;
    public:
        void setData(float r, float i) {
            real = r;
            imag = i;
        }
        void showData() {
            cout << "Real: " << real << ", Imaginary: " << imag << endl;
        }
        void addComplex(Complex c) {
            real += c.real;
            imag += c.imag;
        }
};
int main() {
    Complex c1, c2;
    float r1, i1, r2, i2;
    
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    c1.setData(r1, i1);
    
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;
    c2.setData(r2, i2);
    
    c1.addComplex(c2);
    
    cout << "Sum of two complex numbers: ";
    c1.showData();
    
    return 0;
}