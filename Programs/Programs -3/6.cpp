/* 6. Create a class called Volume that uses three Variables (length, width, height) of type distance (feet and
inches) to model the volume of a room. Read the three dimensions of the room and calculate the volume it
represent, and print out the result .The volume should be in (feet3) form i.e. you will have to convert each
dimension into the feet and fraction of For instance , the length 12 feet 6 inches will be 12.5 ft. */

#include <iostream>
using namespace std;
class Distance {
    private:
        int feet;
        int inches;
    public:
        void setData(int f, int i) {
            feet = f;
            inches = i;
        }
        float toFeet() const {
            return feet + (inches / 12.0); // Convert inches to feet
        }
};
class Volume {
    private:
        Distance length;
        Distance width;
        Distance height;
    public:
        void setDimensions(Distance l, Distance w, Distance h) {
            length = l;
            width = w;
            height = h;
        }
        float calculateVolume() const {
            return length.toFeet() * width.toFeet() * height.toFeet(); // Calculate volume in cubic feet
        }
};
int main() {
    Volume room;
    Distance length, width, height;
    int lFeet, lInches, wFeet, wInches, hFeet, hInches;
    
    cout << "Enter length (feet and inches): ";
    cin >> lFeet >> lInches;
    length.setData(lFeet, lInches);
    
    cout << "Enter width (feet and inches): ";
    cin >> wFeet >> wInches;
    width.setData(wFeet, wInches);
    
    cout << "Enter height (feet and inches): ";
    cin >> hFeet >> hInches;
    height.setData(hFeet, hInches);
    
    room.setDimensions(length, width, height);
    
    float volume = room.calculateVolume();
    
    cout << "Volume of the room: " << volume << " cubic feet" << endl;
    
    return 0;
}
