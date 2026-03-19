/*
    Create a class Car with a static member totalCars and a static
    function showTotal() that displays the total number of cars created.
*/
#include <iostream>
using namespace std;
class car
{
private:
    static int totalcars;

public:
    void buy_car()
    {
        totalcars++;
    }
    static void showtotal()
    {
        cout << "total car sell: " << totalcars;
    }
};
int car::totalcars = 0;
int main()
{
    car c1[10];
    for (int i = 0; i < 10; i++)
    {
        c1[i].buy_car();
    }
    car::showtotal();
}