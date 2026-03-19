// Write a program to find whether the entered number is prime or not.

#include <iostream>
using namespace std;
bool prime(int a)
{
    int count = 0, i = 1;
    while (i <= a)
    {
        if (a % i == 0)
        {
            count++;
        }
        i++;
        if (count > 2)
        {
            break;
        }
    }
    if (count == 2)
        return true;
    else
        return false;
}
int main()
{
    int n;
    do
    {
        cout << "Enter number: " << endl;
        cin >> n;
        if (prime(n))
        {
            cout << n << " is prime number" << endl;
        }
        else
        {
            cout << n << " is not prime number" << endl;
        }
    } while (n != 0);
    return 0;
}

// NOTE:
// Enter 0 for come out of the loop