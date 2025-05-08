//WAP to find the largest of 4 integer and your program should have 3 classes and each classes have 1 integer.
#include <iostream>
using namespace std;
class A {
    private:
        int a;
    public:
        void setA() {
            cout << "Enter first number: ";
            cin >> a;
        }
        int getA() {
            return a;
        }
};
class B {
    private:
        int b;
    public:
        void setB() {
            cout<< "Enter second number: ";
            cin >> b;
        }
        int getB() {
            return b;
        }
};
class C {
    private:
        int c;
    public:
        void setC() {
            cout << "Enter third number: ";
            cin >> c;
        }
        int getC() {
            return c;
        }
};

int main() {
    A objA;
    B objB;
    C objC;
    int num4;
 
    
    objA.setA();
    objB.setB();
    objC.setC();

    cout << "Enter fourth number: ";
    cin >> num4;
    
    int largest = objA.getA();
    
    if (objB.getB() > largest) {
        largest = objB.getB();
    }
    
    if (objC.getC() > largest) {
        largest = objC.getC();
    }
    
    if (num4 > largest) {
        largest = num4;
    }
    
    cout << "The largest number is: " << largest << endl;
    
    return 0;
}
