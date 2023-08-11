#include<iostream>
using namespace std;
class Average{
    public:
    static float calculate(float a,float b,float c){
        float avg = (a + b + c)/3.0;
        cout <<"The average of three number is:> "<<avg;
    }
};
int main(){
    float d,e,f;
    cout <<"Enter three number:> "<<endl;
    cin >>d;
    cin >>d;
    cin >>e;
    Average::calculate(d,e,f);
}