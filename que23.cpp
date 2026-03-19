// Write a program to count the number of line in file

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ifstream bittu("sample.txt");
    if (!bittu)
    {
        cout << "file is not open" << endl;
    }
    string line;
    int count = 0;
    while (getline(bittu, line))
    {
        count++;
    }
    cout << "number of line in file is " << count << endl;
    bittu.close();
    return 0;
}