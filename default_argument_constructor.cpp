#include<iostream>
#include<string.h>
using namespace std;
class ch{
    int roll;
    char name[29],clg[30],br[30];
    public:
    ch(int r,char* n,char* b="CM",char* c="GP SAKOLI")
    {
      roll=r;
      strcpy(name,n);
      strcpy(clg,c);
      strcpy(br,b);
    }
    void display()
    {
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<clg<<endl;
        cout<<br<<endl;
    }
};
int main()
{
    ch c1(47,"aditya"),c2(46,"nishant"),c3(100,"suraj","ce");
    c1.display();
    c2.display();
    c3.display();
    return 0;
}