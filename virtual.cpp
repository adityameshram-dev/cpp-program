#include <iostream>
using namespace std;
class base
{
public:
  virtual void display()
  {
    cout << "in base\n";
  }
};
class base1 : public base
{
public:
  virtual void display()
  {
    cout << "in base1\n";
  }
};
class derived : public base1
{
public:
  virtual void display()
  {
    cout << "in derived\n";
  }
};
int main()
{
  base b, *ptr;
  ptr = &b;
  ptr->display();
  base1 b1;
  ptr = &b1;
  ptr->display();
  derived d;
  ptr = &d;
  ptr->display();
  return 0;
}