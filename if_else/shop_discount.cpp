#include<iostream>
using namespace std;
class Shop
{
    int cp,dis,sp;
    public:
    void sell()
    {
        cout<<"Enter the cost of purchased item";
        cin>>cp;
        if (cp>=1000)
        {
            sp = cp - (10*cp)/100;
            cout<<"The total payable amount after discount is:_\n"<<sp;
        }
        else
        {
            cout<<"The total amount to pay is:-"<<cp;
        }
    }
};
int main()
{
    Shop customer;
    customer.sell();
}