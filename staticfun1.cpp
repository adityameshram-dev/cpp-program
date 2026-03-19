#include <iostream>
using namespace std;
class circle
{
    float diameter;
    static float PI;

public:
    void accept()
    {
        cout << "Enter diameter: ";
        cin >> diameter;
    }
    void area()
    {
        cout << "Area: " << PI * (diameter / 2) * (diameter / 2) << endl;
    }
    void perimeter()
    {
        cout << "Perimeter: " << PI * diameter;
    }
    static void assign()
    {
        PI = 3.14;
    }
};
float circle::PI;
int main()
{
    circle c;
    c.accept();
    circle::assign();
    c.area();
    c.perimeter();
    return 0;
}