// Write a C++ program to overload binary operator ‘+’ to concatenate two strings.

#include <iostream>
#include <cstring>
using namespace std;
class base
{
    char str[30];

public:
    void accept()
    {
        cout << "Enter string: " << endl;
        cin >> str;
    }
    void display()
    {
        cout << "String :" << str << endl;
    }
    void operator+(base s2)
    {
        cout << "concatenate string: " << strcat(str, s2.str) << endl;
    }
};
int main()
{
    base s1, s2;
    s1.accept();
    s2.accept();
    s1.display();
    s2.display();
    s1 + s2;
    //    s1.operator+(s2);
    return 0;
}
