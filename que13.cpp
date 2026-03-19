// Write a program which show the use of Pointer to derived class in multilevel inheritance.

#include <iostream>
using namespace std;
class student
{
protected:
    int roll;
    char name[30];

public:
    student()
    {
        cout << "Enter name and roll: ";
        cin >> name >> roll;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
    }
};
class per : public student
{
protected:
    int m1, m2;

public:
    per()
    {
        cout << "Enter two subjet mrk: ";
        cin >> m1 >> m2;
    }
    void display()
    {
        cout << "subject 1: " << m1 << endl;
        cout << "subject 2: " << m2 << endl;
    }
};
class show : public per
{
public:
    void display()
    {
        cout << "Percentages: " << (m1 + m2) / 2 << endl;
    }
};
int main()
{
    show s;
    student *ptr;
    ptr = &s;
    ptr->display();
    ((per *)ptr)->display();
    ((show *)ptr)->display();
    return 0;
}