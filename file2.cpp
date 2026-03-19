// use of EOF

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ifstream bittu("sample.txt");
    char ch;
    if (!bittu)
    {
        cout << "file not open" << endl;
    }
    while (1)
    {
        bittu.get(ch);
        if (bittu.eof())
        {
            cout<<"\nreading complete..."<<endl;
            break;
        }
        cout<<ch;
    }
    return 0;
}