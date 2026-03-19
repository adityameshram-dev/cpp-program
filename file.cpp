#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream bout("sample.txt"); // creating and opeing file using constructor in writing mode
    if (bout.is_open())          // checking file open or not
    {
        bout << "hi my name is bittu." << endl;
        bout << "i creaded file.";
        bout.close();            // closing file
    }
    else
    {
        cout << "file is not open" << endl;
    }
    string line;
    ifstream bin("sample.txt"); // opeing file using construtor in reading mode
    if (!bin)                   // checking file open or not
    {
        cout << "open is not file" << endl;
    }
    cout<<"reading..."<<endl;
    while (getline(bin, line))
    {
        cout << line << endl;
    }
    cout<<"reading is complete"<<endl;
    bin.close();               // closing file
    return 0;
}