#include <iostream>
using namespace std;

int main() {
    string name, str;
    cout << "Enter name: ";
    cin >> name;

    int i = name.length() - 1;
    
    while (i >= 0) {
        str += name[i];   // append characters safely
        i--;
    }

    cout << str << endl;
    return 0;
}
