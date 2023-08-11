#include<iostream>
using namespace std;
int main()
{
    int grade;
    cout<<"Enter your marks:> ";
    cin>>grade;
    if (grade<25)
    {
        cout<<"You achieve grade F";
    }
    else if (grade>25&&grade<45)
    {
        cout<<"You achieve grade E";
    }
    else if (grade>45&&grade<50)
    {
        cout<<"You achieve grade D";
    }
    else if (grade>50&&grade<60)
    {
        cout<<"You achieve grade C";
    }
    else if (grade>60&&grade<80)
    {
        cout<<"You achieve grade B";
    }
    else
    {
        cout<<"You achieve grade A";
    }
}