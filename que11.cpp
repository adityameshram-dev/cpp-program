/* 
    Write a program to declare a class ‘book’ containing data
    members as ‘title’, ‘author-name’, ‘publication’, ‘price’.
    Accept and display the information for one object using
    pointer to that object.
*/
#include <iostream>
using namespace std;
class book
{
    char title[50], author_name[30], publication[50];
    float price;

public:
    void accept()
    {
        cout << "Enter book title,author name,publication, price" << endl;
        cin >> title >> author_name >> publication >> price;
    }
    void display()
    {
        cout << "titile: " << title << endl;
        cout << "author name: " << author_name << endl;
        cout << "publication: " << publication << endl;
        cout << "price: " << price << endl;
    }
};
int main()
{
    book b, *ptr;
    ptr = &b;
    ptr->accept();
    ptr->display();
    return 0;
}