/* 
    Develop c++ program to open and read content of file also
    write “object oriented” string in file and close it. 
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fout("abc.txt", ios::in | ios::out);
    char ch;
    if (!fout)
    {
        cout << "file not open" << endl;
    }
    while (fout.get(ch))
    {
        cout << ch;
    }
    fout.close();
    ofstream f("abc.txt", ios::app);
    f << "object oriented";
    f.close();
    return 0;
}