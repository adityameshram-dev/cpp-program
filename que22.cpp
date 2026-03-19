// Write fin  C++ program to append data from abc . txt to xyz . txt file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fin("abc.txt");
    ofstream fout("xyz.txt", ios::app);
    if ((!fin) || (!fout))
    {
        cout << "file not open" << endl;
    }
    char ch;
    while (fin.get(ch))
    {
        fout << ch;
    }
    fin.close();
    fout.close();
    return 0;
}