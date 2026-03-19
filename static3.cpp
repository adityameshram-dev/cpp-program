#include <iostream>
#include <iomanip>
using namespace std;
class employe
{
    static int salary;
    int id;

public:
    employe()
    {
        cout << "enter id ";
        cin >> id;
    }
    void display()
    {
        cout << setw(20) << salary << endl;
        cout << id << endl;
    }
};
int employe ::salary = 10000;
int main()
{
    employe e1, e2;
    e1.display();
    e2.display();
    return 0;
}