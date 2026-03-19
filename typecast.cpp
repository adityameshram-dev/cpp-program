// typecasting in c++

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = a;
    cout << "Implicit type casting " << endl;
    cout << a << " into float is " << b << endl;

    b = 5.5;
    a = int(b);
    cout << "Explicit type casting " << endl;
    cout << b << " into int is " << a << endl;

    int n = 65;
    char c = n;
    cout << "int to char" << endl;
    cout << n << " into char is " << c << endl;

    cout << "char into int" << endl;
    int x = c;
    cout << c << " into int is s" << x << endl;
    return 0;
}