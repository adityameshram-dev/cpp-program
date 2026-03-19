// compare which number is big from two different classes
#include <iostream>
using namespace std;
class c1;
class c2
{
    int n1;

public:
    void accept()
    {
        cin >> n1;
    }
    friend void cmp(c1, c2);
};
class c1
{
    int n1;

public:
    void accept()
    {
        cin >> n1;
    }
    friend void cmp(c1, c2);
};
void cmp(c1 x1, c2 x2)
{
    if(x1.n1>x2.n1)
    cout<<x1.n1;
    else
    cout<<x2.n1;
}
int main()
{
    c1 x1;
    c2 x2;
    x1.accept();
    x2.accept();
    cmp(x1,x2);
    return 0;
}
