// swap two integer,floating,string
#include <iostream>
#include <string.h>
using namespace std;
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << x << y << endl;
}
void swap(float x, float y)
{
    float temp = x;
    x = y;
    y = temp;
    cout << x << y << endl;
}
void swap(char *x, char *y)
{
    char temp[20];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
    cout << x << y << endl;
}
int main()
{
    int a, b;
    float c, d;
    char e[20], f[20];
    cout << "Enter two integer number: ";
    cin >> a >> b;
    cout << "Enter two floating number: ";
    cin >> c >> d;
    cout << "Enter two string: ";
    cin >> e >> f;
    swap(a, b);
    swap(c, d);
    swap(e, f);
    return 0;
}