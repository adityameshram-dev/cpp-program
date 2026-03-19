// single inheritance

#include<iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout<<"hi from base class through drive class call from main function:\n";
    }
};
class derived : public base
{
    public:
    void display2(){
    cout<<"hi from derived class through derived claas claaa from main function: ";
    }
};
int main()
{
    derived d1;
    d1.display();
    d1.display2();
    return 0;
}