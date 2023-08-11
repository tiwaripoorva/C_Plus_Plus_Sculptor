#include<iostream>
using namespace std;
class base
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"Enter the value base class:";
        cin>>a;
    }
    void show()
    {
        cout<<"a = "<<endl;
    }

};
class derive1:public base
{
    private:
    int b;
    public:
    void input1()
    {
        cout<<"Enter values of derive class: ";
        cin>>b;
    }
    void show1()
    {
        cout<<"b = "<<b<<endl;
    }
};
class derive2:public derive1
{
    private:
    int c;
    public:
    void input2()
    {
        cout<<"Enter value of derive 2 class:";
        cin>>c;
    }
    void show2()
    {
        cout<<"c = "<<c<<enl;
    }
};
void main()
{
    base ob;
    ob.input();
    ob.show();
    derive1 ob1;
    ob1.input1();
    ob1.show1();
    derive2 ob2;
    ob2.input();
    ob2.show();
    ob2.input1()
    ob2.show1();
}