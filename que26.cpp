/* 
    Write a C++ program to print multiplication table of 7. 
    (example: 7 × 1 = 7 ..... 7 × 10 = 70)
*/

#include<iostream>
using namespace std;
int main()
{
    int i=1,num;
    cout<<"Enter number: "<<endl;
    cin>>num;
    do
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    } while (i<=10);
    return 0;
}