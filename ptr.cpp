// calculate area and valume using pointer
#include <iostream>
using namespace std;
class box
{
  float hei, wid, bre; // bre=len
public:
  void accept()
  {
    cout << "Enter height,width,bredth: ";
    cin >> hei >> wid >> bre;
  }
  void cal_area()
  {
    cout << "Area: " << 2 * (bre * wid + bre * hei + wid * hei);
  }
  void cal_volume()
  {
    cout << "volume: " << bre * wid * hei;
  }
};
int main()
{
  box b, *ptr;
  ptr = &b;
  ptr->accept();
  ptr->cal_area();
  ptr->cal_volume();
  return 0;
}