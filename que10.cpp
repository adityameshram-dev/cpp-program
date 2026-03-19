// Develop a c++ program for constructor with default argument and use of destructor.

#include <iostream>
#include <string.h>
using namespace std;
class emp
{
    int id;
    char name[30], comname[40];
    float salary;

public:
    emp(int w, const char *x, float y,const char *z = "infosys")
    {
        id = w;
        salary = y;
        strcpy(name, x);
        strcpy(comname, z);
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "name: " << name << endl;
        cout << "salary: " << salary << endl;
        cout << "company name: " << comname << endl;
    }
};
int main()
{
    emp e(45,"aditya",45000);
    e.display();
    return 0;
}
