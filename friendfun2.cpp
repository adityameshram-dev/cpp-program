// calculate mean of two different object 

#include <iostream>
using namespace std;
class xyz
{
    int a, b;

public:
    void accept()
    {
        cout << "Enter two number: ";
        cin >> a >> b;
    }
    friend float mean(xyz h)
    {
        return (h.a + h.b) / 2.0;
    }
};
int main()
{
    xyz l;
    l.accept();
    cout << "mean is " << mean(l);
    return 0;
}