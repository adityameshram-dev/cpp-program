/*3. Write a C++ program to declare a class birthday having data members day, month,
year. Accept this information for five objects using pointer to the array of objects*/
#include <iostream>
using namespace std;
class birthday
{
    int d, m, y;

public:
    void accept()
    {
        cout << "Enter date of birth: ";
        cin >> d >> m >> y;
    }
    void display()
    {
        if (d <= 31 && m <= 12)
        {
            cout << d << ":" << m << ":" << y << endl;
        }
    }
};
int main()
{
    birthday b[5], *ptr;
    ptr = &b[0];
    for (int i = 0; i < 2; i++)
    {
        ptr->accept();
        ptr++;
    }
    ptr = &b[0];
    cout<<"DATE OF BIRTH\n"<<endl;
    for (int i = 0; i < 2; i++)
    {
        ptr->display();
        ptr++;
    }
    return 0;
}