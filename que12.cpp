//  Explain ‘this’ pointer with an example.

#include<iostream>
using namespace std;
class base
{
int id;
char name[30];
float salary;
public:
void accept()
{
    cout<<"Enter id,name,salary"<<endl;
    cin>>this->id>>this->name>>this->salary;
}
void display()
{
    cout<<"ID :"<<this->id<<endl;
    cout<<"NAME :"<<this->name<<endl;
    cout<<"SALARY :"<<this->salary<<endl;
}
base cmp(base b2)
{
    if(salary>b2.salary)
    return *this;
    else
    return b2;
}
};
int main()
{
    base b1,b2,b3;
    b1.accept();
    b2.accept();
    b1.display();
    b2.display();
    b3=b1.cmp(b2);
    b3.display();
    return 0;
}