#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};
class Car : public vehicle
{
public:
    Car()
    {
        cout << "This Vehicle is Car" << endl;
    }
};

int main()
{
    Car obj;
    return 0;
}