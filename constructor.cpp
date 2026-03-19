#include <iostream>
using namespace std;
class student
{
    int id;

public:
    student() {}
    student(int x)
    {
        id = x;
    }
    student(student &s)
    {
        id = s.id;
    }
    void display()
    {
        cout << id << endl;
    }
    ~student() {}
};
int main()
{
    student s3(1);
    student s2(s3);
    student s1;
    s3.display();
    s2.display();
    s1.display();
    return 0;
}