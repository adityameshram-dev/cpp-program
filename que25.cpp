// Explain virtual base class with suitable example

#include <iostream>
using namespace std;
class base
{
protected:
    int roll;

public:
    void accept()
    {
        cout << "Ente roll number: " << endl;
        cin >> roll;
    }
    void display()
    {
        cout << "Roll number: " << roll << endl;
    }
};
class deri : virtual public base
{
protected:
    char name[30];

public:
    void accpet()
    {
        cout << "Enter name: " << endl;
        cin >> name;
    }
    void display()
    {
        cout << "Name: " << name << endl;
    }
};
class deri1 : virtual public base
{
protected:
    char clg_name[30];

public:
    void accpet()
    {
        cout << "Enter college name: " << endl;
        cin >> clg_name;
    }
    void display()
    {
        cout << "College Name: " << clg_name << endl;
    }
};
class res : public deri, public deri1
{
    int m1;

public:
    void accept()
    {
        cout << "Enter mark: " << endl;
        cin >> m1;
    }
    void display()
    {
        cout << "m1: " << m1 << endl;
    }
};
int main()
{
    res r;
    r.base::accept();
    r.deri::accpet();
    r.deri1::accpet();
    r.accept();
    r.base::display();
    r.deri::display();
    r.deri1::display();
    r.display();
    return 0;
}
