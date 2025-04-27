/*
Write a program to input length and breadth of a room and calculate and print its area and perimeter.
*/

#include <iostream>
using namespace std;
int main() {
    float length, breadth, area, perimeter;
    
    cout << "Enter the length of the room: ";
    cin >> length;
    
    cout << "Enter the breadth of the room: ";
    cin >> breadth;
    
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    
    cout << "Area of the room: " << area << endl;
    cout << "Perimeter of the room: " << perimeter << endl;
    
    return 0;
}