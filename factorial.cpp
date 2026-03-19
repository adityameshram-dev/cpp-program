#include<iostream>
using namespace std;
class fact
{
    int n,fact=1,i;
    public:
    void accept()
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<fact;
    }
};
int main()
{
    fact f1;
    f1.accept();
    return 0;
}