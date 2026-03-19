#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ofstream fout("copy.txt");   // open using constructor in write mode. open using open function fout.open("copy.txt");
    ifstream sout("sample.txt"); // open another file in read mode using ifstream
    if ((!sout) || (!fout))
    {
        cout << "file not open" << endl;
    }
    string line;
    while (1)
    {
        if (sout.eof())
        {
            cout << "copy all data from sample.txt to copy.txt" << endl;
            break;
        }
        while (getline(sout, line))
        {
            fout << line << endl;
        }
    }
    ifstream fin("copy.txt");
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fout.close();
    sout.close();
    return 0;
}