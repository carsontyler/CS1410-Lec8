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
    // Constructor
    Distance(): feet(0), inch(0){}                        // Constructor with no arguments, Takes no parameters/arguments
    Distance(int ft, float in): feet(ft), inch(in){}      // Two parameters, with two arguments
                                                          // SET TWO, one with parameters, one without

    void setDist(int f, float i)
    {
        feet = f;
        inch = i;

    }
    void getDist()                                       // Get user input
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

    // Prototypes
    void add_dist(Distance d1, Distance d2);
};

// Prototypes

// Main Program
int main()
{
    Distance d1, d4;
    Distance d2(8, 2.0);                                // Must have two parameters
    Distance d3(2, 4.0);

    cout << "In d1, ";
    d1.showDist();
    cout << "In d2 ";
    d2.showDist();
    cout << "In d3 ";
    d3.showDist();
    d4.add_dist(d2, d3);
    cout << "In d4 ";
    d4.showDist();

    return 0;
}
// Function Definitions
// Belongs to the class. A method for members only
// Template: CLASSNAME::Function(){}
// d1 and d2 can use it
// 1) Declare Prototype inside class
// 2) Definition is outside class
// 3) Use the scope resolution operator ::
void Distance::add_dist(Distance d2, Distance d3)
{
    inch = d2.inch + d3.inch;                             // Add inches
    feet = 0;
    if(inch >= 12.0)
    {
        inch -= 12.0;
        feet++;                                          // Check for extra feet
    }
    feet += d2.feet + d3.feet;                           // Add feet
}