/*
    Create a class Rectangle with private members length and breadth.
    Use a friend function to calculate and display the area and display which one is big.
*/
#include <iostream>
using namespace std;
class rectangle
{
private:
    float len, bre;

public:
    void getdata()
    {
        cout << "enter lenght and breadth: ";
        cin >> len >> bre;
    }
    friend void cal(rectangle, rectangle);
};
void cal(rectangle c, rectangle b)
{
    float area1 = c.len * c.bre;
    float area2 = b.len * b.bre;
    cout << "area 1 is: " << area1 << endl;
    cout << "area 2 is: " << area2 << endl;
    if (area1 < area2)
        cout << "rectangle 2 is big";
    else if (area1 > area2)
        cout << "rectangle 1 is big";
    else
        cout << "both are same";
}
int main()
{
    rectangle r1, r2;
    r1.getdata();
    r2.getdata();
    cal(r1, r2);
    return 0;
}