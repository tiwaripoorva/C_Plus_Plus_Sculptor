#include<iostream>
using namespace std;
class base1
{
    private:
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter values of base 1 class";
        cin>>a>>b;
    }
    void show()
    {
        c = a+b;
        cout<<"Sum = "<<c<<endl;
    }
};
class base2
{
    private:
    int a,b,c;
    public:
    void input1()
    {
        cout<<"Enter values of base2 class";
        cin>>a>>b;
    }
    void show1()
    {
        c = a-b;
        cout<<"Subtraction:-"<<c<<endl;
    }
};
class derive:public base1,public base2
{
    private:
    int a,b,c;
    public:
    void input2()
    {
        cout<<"Enter values of derived class";
        cin>>a>>b;
    }
    void show2()
    {
        c = a*b;
        cout<<"Multiplication = "<<c<<endl;
    }
};
int main()
{
    derive ob2;
    ob2.input2();
    ob2.show2();
    ob2.input();
    ob2.show();
    ob2.input1();
    ob2.show1();
}