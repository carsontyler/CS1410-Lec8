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
    static int count;                                           // Static only created the first time it's encountered
                                                                // d2 can't touch it if d1 touches it. It's shared by EVERY members
                                                                // Add to a constructor. ONE PER CLASS
public:
    // Constructor
    Distance(): feet(0), inch(0){count++;}                       // Constructor with no arguments, Takes no parameters/arguments
    Distance(int ft, float in): feet(ft), inch(in){count++;}     // Two parameters, with two arguments
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
    Distance add_dist_to_me(Distance d1);
    int getCount()
    {
        return count;
    }
};
int Distance::count = 0;
// Prototypes

// Main Program
int main()
{
    Distance d1, d4;
    cout << "Count is " << d1.getCount() << endl;
    Distance d2(8, 2.0);                                // Must have two parameters
    cout << "Count is " << d2.getCount() << endl;
    Distance d3(2, 4.0);

    cout << "In d1, ";
    d1.showDist();
    cout << "Count is " << d3.getCount() << endl;
    cout << "In d2 ";
    d2.showDist();
    cout << "In d3 ";
    d3.showDist();
    cout << "Count is " << d4.getCount() << endl;
    d4.add_dist(d2, d3);
    cout << "In d4 ";
    d4.showDist();

    d4 = d4.add_dist_to_me(d2);
    cout << "In d4 now ";
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

Distance Distance::add_dist_to_me(Distance d1)
{
    Distance temp;                                       // Initialize to zero
    temp.inch = inch + d1.inch;
    if(temp.inch >= 12)
    {
        temp.inch -= 12;
        temp.feet++;
    }
    temp.feet += feet + d1.feet;

    return temp;

}