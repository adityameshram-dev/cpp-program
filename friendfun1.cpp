// check which object have big length

#include <iostream>
using namespace std;
class dist
{
    int len;

public:
    void accept()
    {
        cout << "Enter Lenght: ";
        cin >> len;
    }
    friend void display(dist x1, dist x2)
    {
        if (x1.len > x2.len)
        {
            cout << "big len: " << x1.len;
        }
        else
        {
            cout << "big len: " << x2.len;
        }
    }
};
int main()
{
    dist d1, d2;
    d1.accept();
    d2.accept();
    display(d1, d2);
    return 0;
}