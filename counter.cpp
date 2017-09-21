// File: counter.cpp
// Created by Carson Tyler on 9/21/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
using namespace std;
// Constants, Structs, Classes
class Counter
{
private:
    unsigned int count;
public:
    Counter(): count(100){/*empty body*/}        // CONSTRUCTOR INITIALIZES VALUE
    void incCount()                            // Increment count
    {
        count++;
    }
    int getCount()                              // Return count
    {
        return count;
    }

};

// Main Program
int main(void)
{
    Counter c1, c2;

    cout << "\nc1 = " << c1.getCount();         // Display
    c1.incCount();                              // Increment c1
    cout << "\nc1 = " << c1.getCount();

    cout << "\nc2 = " << c2.getCount();
    c2.incCount();
    cout << "\nc2 = " << c2.getCount();

    return 0;
}
// Function Definitions