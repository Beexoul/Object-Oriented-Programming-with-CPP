/*
Creat e a new class named City that will have two member varibles CityName (char[20]), and
DistFromKtm (float).Add member functions to set and retrieve the CityName and DistanceFromKtm
separately. Add new member function AddDistance that takes two arguments of class City and returns
the sum of DistFromKtm of two arguments. In the main function, Initialize three city objects .Set the
first and second City to be Pokhara and Dhangadi. Display the sum of DistFromKtm of Pokhara and
Dhangadi calling AddDistance function of third City object.
*/

#include <iostream>
#include <cstring>
using namespace std;

class City {
private:
    char CityName[20];
    float DistFromKtm;

public:
    void setCityName(const char* name) {
        strncpy(CityName, name, sizeof(CityName) - 1);
        CityName[sizeof(CityName) - 1] = '\0';
    }

    void setDistFromKtm(float distance) {
        DistFromKtm = distance;
    }

    const char* getCityName() const {
        return CityName;
    }

    float getDistFromKtm() const {
        return DistFromKtm;
    }

    float AddDistance(City c1, City c2) {
        return c1.DistFromKtm + c2.DistFromKtm;
    }
};

int main() {
    City city1, city2, city3;

    city1.setCityName("Pokhara");
    city1.setDistFromKtm(200.5);

    city2.setCityName("Dhangadi");
    city2.setDistFromKtm(500.75);

    float totalDistance = city3.AddDistance(city1, city2);

    cout << "Total distance from Kathmandu to " << city1.getCityName()
         << " and " << city2.getCityName()
         << " is: " << totalDistance << " km" << endl;

    return 0;
}
