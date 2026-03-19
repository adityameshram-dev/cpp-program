#include <iostream>
using namespace std;
class emp
{
protected:
    int id, code;

public:
    void accept()
    {
        cout << "Enter id and code: ";
        cin >> id >> code;
    }
    virtual void display()
    {
        cout << "id: " << id << endl;
        cout << "code: " << code << endl;
    }
};
class programmer : public emp
{
    char skill[20];

public:
    void accept1()
    {
        cout << "enter skill: ";
        cin >> skill;
    }
    void display1()
    {
        cout << "skill: " << skill << endl;
    }
};
class manager : public emp
{
    char dept[20];

public:
    void accept2()
    {
        cout << "Enter department name: ";
        cin >> dept;
    }
    void dissplay2()
    {
        cout << "department name: " << dept << endl;
    }
};
int main()
{
    programmer p1;
    manager m1;
    cout << "-----Enter data of PROGRAMMER-----\n";
    p1.accept();
    p1.accept1();
    cout << "-----Enter data of MANAGER-----\n";
    m1.accept();
    m1.accept2();
    cout << "-----Data of PROGRAMMER-----\n";
    p1.display();
    p1.display1();
    cout << "-----Data of MANAGER-----\n";
    m1.display();
    m1.dissplay2();
    return 0;
}