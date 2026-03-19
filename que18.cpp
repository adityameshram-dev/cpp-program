// Write a program that copies contents of one file into another file.

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("sample.txt");
    ofstream fout("abc.txt");
    if((!fin) || (!fout))
    {
        cout<<"file not open"<<endl;
    }
    char ch;
    while(fin.get(ch))
    {
        fout<<ch;
    }
    fout.close();
    fin.close();
    return 0;
}