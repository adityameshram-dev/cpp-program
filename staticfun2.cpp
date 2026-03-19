#include <iostream>
using namespace std;
class student
{
    int roll;
    static int count;

public:
    void getdata()
    {
        cout << "enter roll: ";
        cin >> roll;
        count++;
    }
    void putdata()
    {
        cout << "roll number: " << roll << endl;
    }

    static void showcount()
    {
        cout << "total student: " << count;
    }
};
int student::count = 0;

int main()
{
    student s1, s2, s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();

    s1.putdata();
    s2.putdata();
    s3.putdata();
    student::showcount();
}