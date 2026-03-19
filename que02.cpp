/*
    Write a C++ program to declare a class ‘circle’ with data
    members as radius and area. Declare a function getdata to
    accept radius and putdata to calculate and display area of circle. 
*/

#include <iostream>
using namespace std;
class circle
{
    float radius, area;

public:
    void getdata()
    {
        cout << "Enter radius of circle: " << endl;
        cin >> radius;
    }
    void putdata()
    {
        cout << "AREA is " << 3.14 * radius * radius << endl;
    }
};
int main()
{
    circle c;
    c.getdata();
    c.putdata();
    return 0;
}