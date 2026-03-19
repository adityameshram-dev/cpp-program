/*
    Write a C++ program to declare a class ‘College’ with data members as
    name and college code. Derive a new class ‘student’ from the class college
    with data members as sname and roll no. Accept and display details of one student with college data.
*/

#include <iostream>
using namespace std;
class college
{
protected:
    char name[30];
    int college_code;

public:
    void accept()
    {
        cout << "Enter college name and college code: " << endl;
        cin >> name >> college_code;
    }
    void display()
    {
        cout << "College name: " << name << endl;
        cout << "College code: " << college_code;
    }
};
class student : public college
{
    int roll_no;
    char sname[30];

public:
    void accept()
    {
        cout << "Enter roll number and name " << endl;
        cin >> roll_no >> sname;
    }
    void display()
    {
        cout << "name: " << sname << endl;
        cout << "roll no: " << roll_no << endl;
    }
};
int main()
{
    student s;
    s.accept();
    s.college::accept();
    s.display();
    s.college::display();
    return 0;
}