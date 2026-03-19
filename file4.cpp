#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream bittu;
    bittu.open("sample.txt", ios::app);
    if (!bittu)
    {
        cout << "file not open" << endl;
    }
    bittu << "\ni'm writing in this file i don't what i writing in this file but ijust writing" << endl;
    bittu.close();
    ifstream fin;
    fin.open("sample.txt", ios::in);
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    return 0;
}