/*
    Create two classes:
    Circle with a private member radius
    Square with a private member side
    Write a friend function called compareArea() that:
    Calculates the area of both shapes
    Displays which one has the larger area
*/
#include <iostream>
using namespace std;
class square;
class circle
{
private:
    float radius;
    const float pi = 3.14;

public:
    void getdata()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }
    friend void cal(circle, square);
};
class square
{
private:
    float side;

public:
    void getdata()
    {
        cout << "Enter side: ";
        cin >> side;
    }
    friend void cal(circle, square);
};
void cal(circle c, square s)
{
    float circleArea = c.pi * c.radius * c.radius;
    float squareArea = s.side * s.side;

    cout << "\nArea of Circle: " << circleArea;
    cout << "\nArea of Square: " << squareArea << endl;

    if (circleArea > squareArea)
        cout << "Circle has larger area.\n";
    else if (squareArea > circleArea)
        cout << "Square has larger area.\n";
    else
        cout << "Both have equal area.\n";
}
int main()
{
    circle c;
    square s;
    c.getdata();
    s.getdata();

    cal(c, s); // call friend function

    return 0;
}