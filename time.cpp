// subtraction of two different time

#include <iostream>
using namespace std;
class t
{
    int min, hr;

public:
    void accept()
    {
        cout << "Enter time" << endl;
        cin >> hr >> min;
    }
    void dispaly()
    {
        cout << hr << " :: " << min << endl;
    }
    friend void cal(t t1, t t2)
    {
        t temp;
        if (t1.min < t2.min)
        {
            temp.min = temp.min + 60;
        }
        temp.min = t1.min - t2.min;
        t1.hr = t1.hr - 1;
        temp.hr = t1.hr - t2.hr;

        cout << temp.hr << " :: " << temp.min << endl;
    }
};
int main()
{
    t t1, t2;
    t1.accept();
    t2.accept();
    cal(t1, t2);
    return 0;
}
