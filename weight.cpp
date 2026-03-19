// calculate mass of two different object
#include <iostream>
using namespace std;
class planet
{
    float w, m;
    static float g;

public:
    void accept()
    {
        cout << "Enter mass: ";
        cin >> m;
        w = m * g;
    }
    friend void display(planet p1, planet p2)
    {
        if (p2.w > p1.w)
            cout << p2.w;
        else
            cout << p1.w;
    }
};
float planet::g = 9.8;
int main()
{
    planet p1, p2;
    p1.accept();
    p2.accept();
    display(p1, p2);

    return 0;
}