/*
    Write a C++ program to declare two classes with data members as
    m1 and m2 respectively. Use friend function to calculate
    average of two (m1, m2) marks and display it. 
*/
// (Hint : class 1 contains m1 and class 2 contains m2)

#include <iostream>
using namespace std;
class c2;
class c1
{
    int m1;

public:
    void accept()
    {
        cout << "Enter sub1 mark" << endl;
        cin >> m1;
    }
    void display()
    {
        cout << "subject 1 mark: " << m1 << endl;
    }
    friend void avg(c1, c2);
};
class c2
{
    int m2;

public:
    void accept()
    {
        cout << "Enter sub2 mark" << endl;
        cin >> m2;
    }
    void display()
    {
        cout << "subject 2 mark: " << m2 << endl;
    }
    friend void avg(c1, c2);
};
void avg(c1 a1, c2 a2)
{
    cout << "AVGRAGE: " << (a1.m1 + a2.m2) / 2.0 << endl;
}
int main()
{
    c1 a1;
    c2 a2;
    a1.accept();
    a2.accept();
    a1.display();
    a2.display();
    avg(a1,a2);
    return 0;
}