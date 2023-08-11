#include<iostream>
using namespace std;
class student
{
    public:
    void calculate()
    {
    int noc,noa,per;
    cout<<"Enter the number of total classes:-"<<endl;
    cin>>noc;
    cout<<"Enter the number of classes attended:-"<<endl;
    cin>>noa;
    per = (noa*100)/noc;
    cout<<"Total percentage of student is:- "<<per<<"%"<<endl;
    if(per<75)
    {
        cout<<"Student is not eligible to give exam";
    }
    else
    {
        cout<<"Student is eligible to give exam";
    }
    }
};
int main()
{
    student s;
    s.calculate();
}