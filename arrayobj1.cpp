#include <iostream>
using namespace std;

class Student
{
    string name;
    int marks;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayData()
    {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter data for student " << i + 1 << ":" << endl;
        s[i].getData();
    }
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < 3; i++)
    {
        s[i].displayData();
    }
    return 0;
}
