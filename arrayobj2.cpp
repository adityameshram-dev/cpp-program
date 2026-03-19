#include <iostream>
#include <string.h>
using namespace std;
;
class staff
{
    int ex;
    char name[20], desi[20];

public:
    void accept()
    {
        cout << "Enter name desigantion experience";
        cin >> name >> desi >> ex;
    }
    void display()
    {
        if (strcmp("manager", desi) == 0)
        {
            cout << name << desi << ex << endl;
        }
    }
};
int main()
{
    int i;
    staff s[5];
    for (i = 0; i < 5; i++)
    {
        s[i].accept();
    }
    for (i = 0; i < 5; i++)
    {
        s[i].display();
    }
}