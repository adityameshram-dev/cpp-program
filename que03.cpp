// Write the program to show the use of inline function 

#include <iostream>
using namespace std;
class number
{
    int n1, n2;

public:
    void accept()
    {
        cout << "Enter Two number" << endl;
        cin >> n1 >> n2;
    }
    inline int add()
    {
        return n1 + n2;
    }
    inline int sub()
    {
        return n1 - n2;
    }
    inline int mul()
    {
        return n1 * n2;
    }
    inline int div()
    {
        return n1 / n2;
    }
};
int main()
{
    number n;
    n.accept();
    cout << "addition: " << n.add() << endl;
    cout << "subtraction: " << n.sub() << endl;
    cout << "multiplication: " << n.mul() << endl;
    cout << "division: " << n.div() << endl;
    return 0;
}