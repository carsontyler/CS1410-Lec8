// File: firstClass
// Created by Carson Tyler on 9/21/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
using namespace std;
/* Object Oriented Programming OOP
 * CLASSES
 * Follows structure template, but it also has behavior (internal fuctions)
 *
 *      class <label>
 *      {
 *          private:
 *              Define data members;
 *              Need a way to access this data;
 *              int, char, etc.;
 *          public:
 *              Access private data
 *
 *      };
 *
 * Data hiding is goal of OOP "protect" data from unintended access
 * Method = INTERNAL function which belongs to a class
 * Methods:
 * Setters: update/set data
 * Getters: get/display/access data
 */
class smallobj                                      // Define Class
{
private:
    int somedata;                                   // Class data (belongs to class)
public:
    void setdata(int d)                             // Member function to set data
    {
        somedata = d;
    }

    void showdata()                                 // Member function to display/get data
    {
        cout << "Data is " << somedata << endl;
    }
};
// Main Program
int main()
{
    // Create instances or members of the class
    smallobj s1, s2;

    // ERROR You cannot access your data directly, you need to use an access method
    // cout << "Some data is " << s1.somedata << endl;
    // set my data
    // Dot operator -> class member access operator
    s1.setdata(123);
    s2.setdata(456);
    // Show data
    s1.showdata();
    s2.showdata();

    return 0;
}
// Function Definitions