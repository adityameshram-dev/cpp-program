/*
    Write a C++ program to swap two integer numbers and swap
    two float numbers using function overloading.
*/

#include <iostream>
using namespace std;
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
}
void swap(float a, float b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
}
int main()
{
    int a, b;
    float c, d;
    cout << "Enter two intrger number: " << endl;
    cin >> a >> b;
    cout << "Enter two float number: " << endl;
    cin >> c >> d;
    swap(a, b);
    swap(c, d);
    return 0;
}