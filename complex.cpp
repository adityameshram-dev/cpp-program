// compare which complex number is big

#include <iostream>
using namespace std;
class com
{
    int real, ima;

public:
    void accept()
    {
        cout << "Enter real part and imaginary part: ";
        cin >> real >> ima;
    }
    friend void display(com c1, com c2)
    {

        int a = c1.real + c1.ima;
        int b = c2.real + c2.ima;
        if (a > b)
        {
            cout << c1.real << "+" << c1.ima << "i" << endl;
        }
        else
        {
            cout << c2.real << "+" << c2.ima << "i" << endl;
        }
    }
};
int main()
{
    com c1, c2;
    c1.accept();
    c2.accept();
    display(c1, c2);
    return 0;
}
