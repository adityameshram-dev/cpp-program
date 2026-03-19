#include <iostream>
using namespace std;
class base
{
    int num1;

public:
    base(int x)
    {
        num1 = x;
        cout << "Base: "<< num1 << endl;
    }
};
class derived : public base
{
    int num2;

public:
    derived(int x, int y) : base(y)
    {
        num2 = x;
        cout << "Derived: " << num2;
    }
};
int main()
{
    derived d(12, 13);
    return 0;
}