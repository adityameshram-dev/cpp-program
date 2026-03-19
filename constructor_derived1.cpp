#include <iostream>
using namespace std;
class base
{
    int num1 = 12;
public:
    base()
    {
        cout << num1 << endl;
    }
};
class derived : public base
{
    int num2 = 13;
public:
    derived()
    {
        cout << num2;
    }
};
int main()
{
    derived d;
    return 0;
}