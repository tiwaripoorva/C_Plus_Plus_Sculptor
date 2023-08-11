#include<iostream>
using namespace std;
class base
{
    private:
    int a,b;
    public:
    void input()
    {
        cout<<"Enter values for base class: ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"Sum = "<<a+b<<endl;
    }
};
class derive1:public base
{
    private:
    int n1;
    public:
    void input1()
    {
        cout<<"Enter values of derive class 1:";
        cin>>n1;
    }
    void show1()
    {
        cout<<"n1 = "<<n1<<endl;
    }
};
class derive2:public base
{
    private:
    int n2;
    public:
    void input2()
    {
        cout<<"Enter the value of derive class2:";
        cin>>n2;
    }
    void show2()
    {
        cout<<"n2 = "<<n2<<endl;
    }
};
int main()
{
    derive1 ob1;
    derive2 ob2;
    ob1.input();
    ob1.show();
    ob1.input1();
    ob1.show1();
}
