#include <iostream>
#include <string.h>

using namespace std;
class base
{
    int id;
    string name;

public:
    void accept();
    void display();
};
void base::accept()
{
    cout << "Enter id,name: " << endl;
    cin >> id >> name;
}
void base::display()
{
    cout << "ID: " << id << endl
         << "NAME: " << name << endl;
}
int main()
{
    base b;
    b.accept();
    b.display();
    return 0;
}