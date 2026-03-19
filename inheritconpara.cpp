#include <iostream>
#include <string.h>
using namespace std;
class student
{
protected:
    int roll;
    char name[29];

public:
    student(int x, const char *y)
    {
        roll = x;
        strcpy(name, y);
    }
    void display()
    {
        cout << "\n student";
    }
};
class derived : public student
{
    float per;

public:
    derived(int x, const char *y, float z):student(x,y)
    {
        per = z;
    }
    void display1()
    {
        cout << "\nderived";
    }
};
int main()
{
    derived d(1, "aditya", 3.3);
    d.display();
    d.display1();
    return 0;
}