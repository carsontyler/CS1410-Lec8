// File: distanceClass
// Created by Carson Tyler on 9/21/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
using namespace std;

// Constants
class Distance
{
private:
    int feet;
    float inch;
public:
    void setDist(int f, float i)
    {
        feet = f;
        inch = i;

    }
    void getDist()                      // Get user input
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inch;
    }
    void showDist()
    {
        cout << "There are " << feet << " feet and " << inch << " inches." << endl;
    }

};

// Prototypes

// Main Program
int main()
{
    // Creat an instance "instantiate" the class
    Distance d1, d2;
    d1.setDist(5, 6.2);             // Use methods to set/access the data
    cout << "Distance 1\n";
    d1.showDist();
    cout << "\n";
    d2.getDist();
    cout << "\nDistance 2\n";
    d2.showDist();
    return 0;
}
// Function Definitions