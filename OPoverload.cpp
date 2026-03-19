// concatination of two string of one object without friend function

#include <iostream>
#include <string.h>
using namespace std;
class base
{
    char str1[50], str2[50], str3[50];

public:
    void accept()
    {
        cout << "Enter string: " << endl;
        cin >> str1;
        cout << "Enter string: " << endl;
        cin >> str2;
    }
    void display()
    {
        cout << "String: " << str1 << endl;
        cout << "String: " << str2 << endl;
    }
    void operator+()
    {
        strcpy(str3, strcat(str1, str2));
        cout << "concatinate string: " << endl;
        cout << "String: " << str3 << endl;
    }
};
int main()
{
    base b;
    b.accept();
    b.display();
    b.operator+(); // +b;
    return 0;
}
