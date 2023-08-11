#include<iostream>
using namespace std;
class check
{
    int len,bre;
    public:
    void display()
    {
        cout<<"Enter length and breadth of rectangle\n";
        cin>>len; 
        cin>>bre;
        if (len==bre)
        {
            cout<<"Rectangle of given dimensions is a square";
        }
        else
        {
            cout<<"Rectangle of given dimensions is not a square";
        }
    }

};
int main(){
    check c;
    c.display();
}