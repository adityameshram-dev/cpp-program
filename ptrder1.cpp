/*Write a C++ program declare a class "polygon" having data members width
and height. Derive classes "rectangle" and "triangle" from "polygon" having
area() as a member function. Calculate area of triangle and rectangle using
pointer to derived class object. */
#include <iostream>
using namespace std;
class polygon
{
protected:
    int w, h;

public:
    void accept()
    {
        cout << "Enter width and height: ";
        cin >> w >> h;
    }
};
class rectangle : public polygon
{
public:
    void area()
    {
        cout << "area of rectangle: " << w * h << endl;
    }
};
class triangle : public polygon
{
public:
    void area()
    {
        cout << "Area of triangle: " << 0.5 * w * h;
    }
};
int main()
{
    polygon p, *ptr;
    ptr = &p;
    ptr->accept();
    ((rectangle *)ptr)->area();
    ((triangle *)ptr)->area();
    return 0;
}