#include <iostream>
using namespace std;
class polygon
{
protected:
    float h, w;

public:
    void read(int x, int b)
    {
        h = x;
        w = b;
    }
};
class triangle : virtual public polygon
{
public:
    int area()
    {
        return 0.5 * h * w;
    }
};
class rectangle : virtual public polygon
{
public:
    int area()
    {
        return h * w;
    }
};
class Output : public triangle, public rectangle
{
    public:
    void output(int x)
    {
        cout << "AREA: " << x << endl;
    }
};
    int main()
{
    Output o;
    o.read(2, 2);
    cout<<"RECTANGLE ";
    o.output(o.rectangle::area());
    cout<<"TRIANGLE ";
    o.output(o.triangle::area());
    return 0;
}
