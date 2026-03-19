/* 
    Describe with examples, passing parameters to base class
    constructor and derived class constructor by creating object of
    derived class. 
*/

#include <iostream>
#include <string.h>
using namespace std;
class base
{
protected:
    int id;
    char name[30];

public:
    base(int x, const char *y)
    {
        id = x;
        strcpy(name, y);
    }
    virtual void display()
    {
        cout << "ID: " << id << endl;
        cout << "NAME: " << name << endl;
    }
};
class derived : public base
{
    float per;
    char clgname[40];

public:
    derived(int w, const char *x, float y,const char *z) : base(w, x)
    {
        per = y;
        strcpy(clgname, z);
    }
    void display1()
    {
        cout << "PERCENTAGE: " << per << endl;
        cout << "COLLAGE: " << clgname << endl;
    }
};
int main()
{
    derived d(45, "Adity", 90, "GPS");
    d.display();
    d.display1();
    return 0;
}