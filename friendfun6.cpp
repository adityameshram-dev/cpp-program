// addition of two complex number

#include<iostream>
using namespace std;
class complex 
{
    int real,ima;
    public:
    void accept()
    {
        cin>>real>>ima;
    }
    friend complex cal(complex c1,complex c2)
    {
        complex c3;
        c3.real=c1.real+c2.real;
        c3.ima=c1.ima+c2.ima;
        return c3;
    }
    void display()
    {
        cout<<real<<"+"<<ima<<"i";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.accept();
    c2.accept();
    c3=cal(c1,c2);
    c3.display();
    return 0;
}