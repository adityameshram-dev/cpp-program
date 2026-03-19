#include <iostream>
using namespace std;
class stdu
{
    int roll, mark;
    char name[20];
    static char clg_name[20];

public:
    stdu()
    {
        cin >> name >> roll >> mark;
    }
    void display()
    {
        cout << name << endl;
        cout << roll << endl;
        cout << mark << endl;
        cout << clg_name << endl;
    }
};

char stdu::clg_name[20]="gp sakoli";
int main()
{
    stdu s[5];
    int i;
    for(i=0;i<5;i++)
    {
        s[i].display();
    }
    return 0;
}
