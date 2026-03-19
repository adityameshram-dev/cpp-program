// count the number of space in file

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int space = 0;
    char ch;
    ifstream bittu("sample.txt"); // open the file in read mode using constructor
    if (!bittu)
    {
        cout << "file not open" << endl;
    }
    while (bittu.get(ch))
    {
        if (ch == ' ')
        {
            space++;
        }
    }
    cout<<"number of space in file is "<<space<<endl;
    bittu.close();
    return 0;
}