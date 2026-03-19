/*
    Write a C++ program to find the area of rectangle using class
    rectangle which has following details
        i)   Accept length and breadth from the user.
        ii)  Calculate the area
        iii) Display the result. 
*/

#include <iostream>
using namespace std;
class rectangle
{
    float len, bre, area;

public:
    void accept()
    {
        cout << "Enter length, bredth" << endl;
        cin >> len >> bre;
    }
    void cal()
    {
        area = len * bre;
    }
    void display()
    {
        cout << "AREA: " << area << endl;
    }
};
int main()
{
    rectangle r;
    r.accept();
    r.cal();
    r.display();
    return 0;
}
