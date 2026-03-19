// Develop a c++ program for multilevel inheritance.

#include <iostream>
using namespace std;
class base
{
protected:
    int id;
    char name[30];

public:
    void accept()
    {
        cout << "Enter name, id: " << endl;
        cin >> name >> id;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};
class intermidate : public base
{
protected:
    int m1, m2, m3, m4;

public:
    void accept1()
    {
        cout << "Enter 4 subject mark" << endl;
        cin >> m1 >> m2 >> m3 >> m4;
    }
    void display1()
    {
        cout << "subject 1: " << m1 << endl;
        cout << "subject 2: " << m2 << endl;
        cout << "subject 3: " << m3 << endl;
        cout << "subject 4: " << m4 << endl;
    }
};
class derived : public intermidate
{
    float avg;

public:
    void display2()
    {
        avg = (m1 + m2 + m3 + m4) / 4;
        cout << "AVERAGE: " << avg << endl;
    }
};
int main()
{
    derived d;
    d.accept();
    d.accept1();
    d.display();
    d.display1();
    d.display2();
    return 0;
}