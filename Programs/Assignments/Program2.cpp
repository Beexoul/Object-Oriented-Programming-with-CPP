// Write a program to swapping private data members of two classes using friend function 
#include <iostream>
using namespace std;
class ClassB; 
class ClassA {
    private:
        int a;
    public:
        void setData() {
            cout << "Enter value for Class A: ";
            cin >> a;
        }
        void display() {
            cout << "Class A: " << a << endl;
        }
        friend void swap(ClassA &objA, ClassB &objB);
};
class ClassB {
    private:
        int b;
    public:
        void setData() {
            cout << "Enter value for Class B: ";
            cin >> b;
        }
        void display() {
            cout << "Class B: " << b << endl;
        }
        friend void swap(ClassA &objA, ClassB &objB); 
};
void swap(ClassA &objA, ClassB &objB) {
    int temp = objA.a;
    objA.a = objB.b;
    objB.b = temp;
}
int main() {
    ClassA objA;
    ClassB objB;
    
    objA.setData();
    objB.setData();
    
    cout << "Before swapping:" << endl;
    objA.display();
    objB.display();
    
    swap(objA, objB); 
    
    cout << "After swapping:" << endl;
    objA.display();
    objB.display();
    
    return 0;
}