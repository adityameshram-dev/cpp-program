#include <iostream>
using namespace std;
class addition
{
    int x, y;

public:
    addition()
    {
        cin >> x >> y;
    }
    void display()
    {
        cout << x + y;
    }
};
int main()
{
    addition a1;
    a1.display();
    return 0;
}