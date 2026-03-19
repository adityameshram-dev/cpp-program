// compare mark of two student using this operator
#include <iostream>
using namespace std;
class student
{
    int id;
    char name[20];
    float mark;
    public:
    void acceept()
    {
        cout<<"Enter id, name, mark: \n";
        cin>>this->id>>this->name>>this->mark;
    }
    void display()
    {
        cout<<"name: "<<this->name<<endl<<"id: "<<this->id<<endl<<"mark: "<<this->mark<<endl;
    }
    student cmp(student s)
    {
        if(mark>s.mark)
        {
            return *this;
        }
        else
        {
            return s;
        }
    }
};
int main()
{
    student s1,s2,s3;
    s1.acceept();
    s2.acceept();
    s3=s2.cmp(s1);
    s3.display();
    return 0;
}