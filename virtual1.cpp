#include <iostream>
using namespace std;
class base
{
protected:
    int id;
    char name[30];

public:
    virtual void accept()
    {
        cin >> id >> name;
    }
    virtual void display()
    {
        cout << name << id << endl;
    }
};
class derived : public base
{
    int m;

public:
    void accept()
    {
        cin >> m;
    }
    void display()
    {
        cout << m << endl;
    }
};
int main()
{
    base b, *ptr;
    derived d;

    ptr = &b;
    ptr->accept();

    ptr = &d;
    ptr->accept();

    ptr = &b;
    ptr->display();

    ptr = &d;
    ptr->display();

    return 0;
}