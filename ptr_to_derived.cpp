#include <iostream>
using namespace std;
class base
{
protected:
    int x;

public:
    virtual void accept()
    {
        cout << "Enter number: ";
        cin >> x;
    }
    virtual void display()
    {
        cout << "value of x: " << x << endl;
    }
};
class derived : public base
{
    int y;

public:
    void accept()
    {
        cout << "Enter number: ";
        cin >> y;
    }
    void display()
    {
        cout << "value of y: " << y << endl;
    }
};
int main()
{
    base b, *ptr;
    derived d;
    ptr = &b;
    ptr->accept();
    ptr->display();

    ptr = &d;
    ptr->accept();
    ptr->display();
    return 0;
}