// pointer operator and address operator with example

#include<iostream>
using namespace std;
int main()
{
    int a=5,*ptr;
    ptr=&a;
    cout<<*ptr<<endl;
    cout<<&a<<endl;
    return 0;
}