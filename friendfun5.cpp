// calculate addition mark from two different object
#include <iostream>
using namespace std;
class cmp
{
    int mark;
    char name[10];

public:
    void accept()
    {
        cout << "enter name and mark: ";
        cin >> name >> mark;
    }
    friend void display(cmp s1, cmp s2)
    {
        cout << "addition of mark: " << s1.mark + s2.mark;
    }
};
int main()
{
    cmp s1, s2;
    s1.accept();
    s2.accept();
    display(s1, s2);
    return 0;
}