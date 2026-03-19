// Develop c++ program to check Detection of end of file

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("sample.txt");
    char ch;
    if (!file)
    {
        cout << "File not open!" << endl;
        return 0;
    }
    cout << "File content:\n";
    while (1)
    {
        file.get(ch);     // read character
        if (file.eof())   // EOF detected
        {
            cout << "\n\nEnd of file detected!" << endl;
            break;        // stop reading
        }
        cout << ch;       // display character
    }
    file.close();
    return 0;
}
