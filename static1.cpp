#include <iostream>
using namespace std;
class ch
{
    char name[20];
    static int count;

public:
    ch()
    {
        ocout<<"Enter name:";
        cin >> name;
        count++;
    }
    static void display()
    {
        cout << count;
    }
};
int ch::count;
int main()
{
    ch c[5];
    ch::display();
    return 0;
}