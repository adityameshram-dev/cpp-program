/*
    Write a C++ program to write ‘Welcome to poly’ in a file.
    Then read the data from file and display it on screen.
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("abc.txt");
    if (!fout)
    {
        cout << "file not open" << endl;
    }
    fout << "Welcome to poly" << endl;
    char ch;
    ifstream fin("abc.txt");
    while (fin.get(ch))
    {
        cout << ch;
    }
    fin.close();
    return 0;
}