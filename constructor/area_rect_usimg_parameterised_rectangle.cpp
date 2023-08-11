#include<iostream>
using namespace std;
class Area{
public:
    int a,b;
public:
    Area(int len,int bre){
        a = len;
        b = bre;
    }
public:
    void returnArea(){
        cout << "Area of rectangle:>"<<a*b;
    }
};
int main(){
    int c,d;
    cout << "Length of rectangle:>"<<endl;
    cin >> c;
    cout << "breadth of rectangle:>"<<endl;
    cin >> d;
    Area r(c,d);
    r.returnArea();
}