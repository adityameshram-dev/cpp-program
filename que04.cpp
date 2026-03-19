// Write a program to calulate area of circle use stati keyword for PI

#include<iostream>
using namespace std;
class area
{
    float r;
    static float PI;
    public:
    void accept()
    {
        cout<<"Enter radius: "<<endl;
        cin>>r;
    }
    void display()
    {
        cout<<PI*r*r<<endl;
    }
};
float area::PI=3.14;
int main()
{
    area a;
    a.accept();
    a.display();
    return 0;
}