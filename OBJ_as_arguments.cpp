

#include <iostream>
using namespace std;
class student
{
    int mark;

public:
    void accept()
    {
        cout<<"Enter mark: ";
        cin >> mark;
    }
    void display()
    {
        cout << mark << endl;
    }
    void change(student s)
    {
        s.mark = 5;
        mark = 5;
    }
    void change(student *s)
    {
        s->mark = 5;
        mark = 5;
    }
};
int main()
{
    student s1, s2;
    s1.accept();
    s2.accept();

    cout<<"s1: ";
    s1.display();
    cout<<"s2: ";
    s2.display();

    s2.change(s1);

    cout<<"s1: ";
    s1.display();
    cout<<"s2: ";
    s2.display();

    s2.change(&s1);

    cout<<"s1: ";
    s1.display();
    cout<<"s2: ";
    s2.display();
    return 0;
}