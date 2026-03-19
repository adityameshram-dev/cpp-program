/*
    Write a C++ program to declare a class addition with data
    members as x and y. Initialize value of x and y with
    constructor. Calculate addition and display it using function ‘display.’ 
*/
#include <iostream>
using namespace std;
class addition
{
    int x, y;

public:
    addition()
    {
        cout << "Enter two number: " << endl;
        cin >> x >> y;
    }
    void display()
    {
        cout << "Adition is :" << x + y << endl;
    }
};
int main()
{
    addition a;
    a.display();
    return 0;
}