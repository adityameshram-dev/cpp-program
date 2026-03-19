// multipal inheritance

#include <iostream>
using namespace std;
class base1
{
protected:
    int roll;
    char name[20];

public:
    void accept1()
    {
        cout << "Enter roll number and name: ";
        cin >> roll >> name;
    }
};
class base2
{
protected:
    float per;
    char clg[20];

public:
    void accept2()
    {
        cout << "Enter percentages and clg name: ";
        cin >> per >> clg;
    }
};
class derived : public base2, public base1
{
public:
    void display()
    {
        cout << "name: " << name << endl;
        cout << "roll number: " << roll << endl;
        cout << "percentages: " << per << endl;
        cout << "college name: " << clg << endl;
    }
};
int main()
{
    derived d1;
    d1.accept1();
    d1.accept2();
    d1.display();
    return 0;
}