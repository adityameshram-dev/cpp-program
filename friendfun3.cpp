// swap value the of one object
#include <iostream>
using namespace std;
class abc
{
    int a, b;
    friend void display(abc s)
    {
        cout << "before swaping \n";
        cout << "a=" << s.a << " b=" << s.b << endl;
        cout << "after swaping \n";
        int temp = s.a;
        s.a = s.b;
        s.b = temp;
        cout << "a=" << s.a << " b=" << s.b << endl;
    }

public:
    void accept()
    {
        cin >> a >> b;
    }
};
int main()
{
    abc s;
    s.accept();
    display(s);
    return 0;
}