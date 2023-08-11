#include<iostream>
using namespace std;
class Volume 
{
    int len,hei,wid;
    public:
    Volume(int a,int b,int c){
        len = 5;
        hei = 8;
        wid = 2;
    }
    public:
    void cal(){
        float v = len*wid*hei;
        cout << "Volume of box is:> "<<v<<endl;
    }
};
int main(){
    int a,b,c;
    Volume box(a,b,c);
    box.cal();
    return 0;
}