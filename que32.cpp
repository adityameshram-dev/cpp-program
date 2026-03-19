/* 
    Write a C++ program to declare a class train with members as train no and name. 
    Accept and display data for one object of train. Use pointer to object to 
    call functions of class.
*/
#include<iostream>
using namespace std;
class train
{
    int train_no;
    char trian_name[30];
    public:
    void accept()
    {
        cout<<"Enter train number and train name"<<endl;
        cin>>train_no>>trian_name;
    }
    void display()
    {
        cout<<"Train number: "<<train_no<<endl;
        cout<<"Train name: "<<trian_name<<endl;
    }
};
int main()
{
    train t,*ptr;
    ptr=&t;
    ptr->accept();
    ptr->display();
    return 0;
}