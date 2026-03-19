// calculate average of mark form two different class object

#include <iostream>
using namespace std;
class test2;
class test1
{
    int m;

public:
    void accept()
    {
        cin >> m;
    }
    friend void ave(test1, test2);
};
class test2
{
    int m;

public:
    void accept()
    {
        cin >> m;
    }
    friend void ave(test1, test2);
};
void ave(test1 t1, test2 t2)
{
    cout << "average of mark" << (t1.m + t2.m) / 2.0;
}
int main()
{
    test1 t1;
    test2 t2;
    t1.accept();
    t2.accept();
    ave(t1, t2);
    return 0;
}