/* 
    Write a C++ program to declare a structure employee
    with members as empid and empname. Accept and
    display data for one employee using structure variable.
*/
#include <iostream>
using namespace std;
struct employee
{
    int empid;
    char name[30];
};
int main()
{
    struct employee e;
    cout << "Enter empid and empname" << endl;
    cin >> e.empid >> e.name;
    cout << e.empid << e.name;
    return 0;
}