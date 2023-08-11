#include<iostream>
using namespace std;
class employee
{
    int salary,yos;
    public:
    void bonus()
    {
        cout<<"Enter year of service of employee\n";
        cin>>yos;
        cout<<"Enter salary of employee";
        cin>>salary;
        if(yos>5)
        {
            salary = salary + (5*salary)/100;
            cout<<"The updated salary after bonus is:> \n"<<salary;
        }
        else
        {
            cout<<"The salary of employee is:>\n"<<salary;
        }
    }
};    
int main()
{
    employee e1;
    e1.bonus();
}
