/* 3. Write a program to find sum of two complex number, function call by one object passing second object
as function argument and return third object adding two objects. Hint: c3=c1.addComplex(c2); */

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
        Complex addComplex(Complex c) { 
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
};
int main() {
    Complex c1, c2, c3;
    float r1, i1, r2, i2;
    
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    c1.setData(r1, i1);
    
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;
    c2.setData(r2, i2);
    
    c3 = c1.addComplex(c2); 
    
    cout << "Sum of two complex numbers: ";
    c3.showData();
    
    return 0;
}
