// concatination of two string of two object without friend function

#include <iostream>
#include <string.h>
using namespace std;
class base
{
    char str1[30];

public:
    void accept()
    {
        cout << "Enter string: " << endl;
        cin >> str1;
    }
    void display()
    {
        cout << "str1: " << str1 << endl;
    }
    void operator+(base s2)
    {
        strcpy(str1, strcat(str1, s2.str1));
        cout << "concatinate string: " <<str1 << endl;
    }
};
int main()
{
    base s1, s2;
    s1.accept();
    s2.accept();
    s1.display();
    s2.display();
    s1.operator+(s2);
    //s1+s2;
    return 0;
}