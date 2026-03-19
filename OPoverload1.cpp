// concatination of two string of one object with friend function

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
    friend void operator+(base s1, base s2)
    {
        strcpy(s1.str1, strcat(s1.str1, s2.str1));
        cout << "concatinate string: " << s1.str1 << endl;
    }
};
int main()
{
    base s1, s2;
    s1.accept();
    s2.accept();
    s1.display();
    s2.display();
    //s1+s2;
    operator+(s1, s2);
    return 0;
}