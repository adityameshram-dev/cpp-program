/*
    Write a program that accept account number and balance and name 
    and display the data of that object that balence is lower than 10000
*/

#include <iostream>
using namespace std;
class Account
{
    int accno;
    float bal;
    char name[20];

public:
    void accept()
    {
        cout << "Enter account number,balence,name";
        cin >> accno >> bal >> name;
    }
    void display()
    {
        if (bal < 10000)
        {
            cout << accno << endl;
            cout << bal << endl;
            cout << name << endl;
        }
    }
};
int main()
{
    Account a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i].accept();
    }
    for (int i = 0; i < 5; i++)
    {
        a[i].display();
    }
    return 0;
}