// multilevel inheritance

#include <iostream>
using namespace std;
class student
{
protected:
    int roll;
    char name[20];

public:
    void accept()
    {
        cout << "Enter roll number and name: ";
        cin >> roll >> name;
    }
    void display()
    {
        cout << "name: " << name << endl;
        cout << "roll number: " << roll << endl;
    }
};
class sub : public student
{
protected:
    int sub1, sub2;

public:
    void accept1()
    {
        cout << "Enter 2 subject marl";
        cin >> sub1 >> sub2;
    }
    void display1()
    {
        cout << "subject 1 mark: " << sub1 << endl;
        cout << "subject 2 mark: " << sub2 << endl;
    }
};
class ressult : public sub
{
    int tot;
    float avg;

public:
    void display2()
    {
        tot = sub1 + sub2;
        avg = tot / 2.0;
        cout << "total: " << tot << endl;
        cout << "avrage: " << avg << endl;
    }
};
int main()
{
    ressult r;
    r.accept();
    r.accept1();
    cout << endl
         << "----------DETAIL of SUDENT----------" << endl;
    r.display();
    r.display1();
    r.display2();
    return 0;
}
