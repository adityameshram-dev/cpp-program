/* 
    Write a program in C++ to overload unary ‘_’ operator 
    to negate values of data members of class
*/

#include<iostream>
using namespace std;
class base
{
    int num;
    public:
    void accept()
    {
        cout<<"Enter number: "<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"NUMBER: "<<num<<endl;
    }
    void operator-()
    {
        num=-num;
    }
};
int main()
{
    base b;
    b.accept();
    b.display();
    -b;             // we can write also b.operator-();
    b.display();
    return 0;
}