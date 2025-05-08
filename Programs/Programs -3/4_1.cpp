/* 4. Perform similar operation in above( Que no. 1,2,3) for
ii. Addition of two height with data members feet and inches
*/ 

#include <iostream>
using namespace std;
class Height {
    private:
        int feet;
        int inches;
    public:
        void setData(int f, int i) {
            feet = f;
            inches = i;
        }
        void showData() {
            cout << "Height: " << feet << " feet " << inches << " inches" << endl;
        }
        Height addHeight(Height h) { 
            Height temp;
            temp.inches = inches + h.inches;
            temp.feet = feet + h.feet + (temp.inches / 12);
            temp.inches %= 12; 
            return temp;
        }
};
int main() {
    Height h1, h2, h3;
    int f1, i1, f2, i2;
    
    cout << "Enter feet and inches of first height: ";
    cin >> f1 >> i1;
    h1.setData(f1, i1);
    
    cout << "Enter feet and inches of second height: ";
    cin >> f2 >> i2;
    h2.setData(f2, i2);
    
    h3 = h1.addHeight(h2); 
    
    cout << "Sum of two heights: ";
    h3.showData();
    
    return 0;
}