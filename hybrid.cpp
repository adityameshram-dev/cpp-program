#include <iostream>
using namespace std;
class staff
{
protected:
    int id, code;

public:
    void accept()
    {
        cout << "Enter id and code: ";
        cin >> id >> code;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "CODE: " << code << endl;
    }
};
class teacher : public staff
{
    char sub[20], pub[20];

public:
    void accept1()
    {
        cout << "Enter subject: ";
        cin >> sub;
        cout << "Enter publication: ";
        cin >> pub;
    }
    void display1()
    {
        cout << "subject: " << sub << endl;
        cout << "publication: " << pub << endl;
    }
};
class officer : public staff
{
    char grade[20];

public:
    void accept3()
    {
        cout << "Enter grade: ";
        cin >> grade;
    }
    void display3()
    {
        cout << "grade: " << grade << endl;
    }
};
class typist : public staff
{
protected:
    float speed;

public:
    void accept4()
    {
        cout << "Enter speed: ";
        cin >> speed;
    }
    void display4()
    {
        cout << "speed: " << speed << endl;
    }
};
class regular : public typist
{
    long salary;

public:
    void accept5()
    {
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display5()
    {
        cout << "salary: " << salary << endl;
    }
};
class casual : public typist
{
    int wadges;

public:
    void accept6()
    {
        cout << "Enter wadges: ";
        cin >> wadges;
    }
    void display6()
    {
        cout << "Wadges: " << wadges << endl;
    }
};
int main()
{
    teacher t;
    officer o;
    regular r;
    casual c;
    cout << endl << "-----enter data of teacher-----\n";
    t.accept();
    t.accept1();
    cout << endl << "-----enter data of officer-----\n";
    o.accept();
    o.accept3();
    cout << endl << "-----enter data of regular typist-----\n";
    r.accept();
    r.accept4();
    r.accept5();
    cout << endl << "-----enter data of casual typist-----\n";
    c.accept();
    c.accept4();
    c.accept6();

    cout << endl << "-----Data of teacher-----\n";
    t.display();
    t.display1();
    cout << endl << "-----Data of officer-----\n";
    o.display();
    o.display3();
    cout << endl << "-----Data of regular typist-----\n";
    r.display();
    r.display4();
    r.display5();
    cout << endl << "-----Data of casual typist-----\n";
    c.display();
    c.display4();
    c.display6();
}
