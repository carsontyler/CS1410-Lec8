// File: PointClass
// Created by Carson Tyler on 9/21/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
using namespace std;
// Constants, Structs, Classes
class Point
{
private:
    float x;
    float y;
public:
    // Constructor
    Point(): x(0.0), y(0.0){}
    //Method
    void showPoint()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    void updatePoint(float xnew, float ynew)
    {
        x = xnew;
        y = ynew;
    }
    
};
// Prototypes

// Main Program
int main()
{
    Point p1;
    p1.showPoint();
    p1.updatePoint(2.5, 3.9);

    return 0;
}
// Function Definitions