/* 4. Perform similar operation in above( Que no. 1,2,3) for
i. Addition of two times with data members hours, minutes and seconds
*/
#include <iostream>
using namespace std;
class Time {
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        void setData(int h, int m, int s) {
            hours = h;
            minutes = m;
            seconds = s;
        }
        void showData() {
            cout << "Time: " << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
        }
        Time addTime(Time t) { 
            Time temp;
            temp.seconds = seconds + t.seconds;
            temp.minutes = minutes + t.minutes + (temp.seconds / 60); 
            temp.seconds %= 60; 
            temp.hours = hours + t.hours + (temp.minutes / 60);
            temp.minutes %= 60;
            return temp;
        }
};
int main() {
    Time t1, t2, t3;
    int h1, m1, s1, h2, m2, s2;
    
    cout << "Enter hours, minutes and seconds of first time: ";
    cin >> h1 >> m1 >> s1;
    t1.setData(h1, m1, s1);
    
    cout << "Enter hours, minutes and seconds of second time: ";
    cin >> h2 >> m2 >> s2;
    t2.setData(h2, m2, s2);
    
    t3 = t1.addTime(t2); 
    
    cout << "Sum of two times: ";
    t3.showData();
    
    return 0;
}
