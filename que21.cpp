// Write a C++ program to count number of spaces in text file.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int count = 0;
    char ch;
    ifstream fin("sample.txt");
    if (!fin)
    {
        cout << "file not open" << endl;
    }
    while (fin.get(ch))
    {
        if (ch == ' ')
        {
            count++;
        }
    }
    fin.close();
    cout << "number of spaces: " << count << endl;
    return 0;
}
