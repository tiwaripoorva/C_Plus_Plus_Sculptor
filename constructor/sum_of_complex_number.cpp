#include<iostream>
using namespace std;
class Complex
{
    float real, imag;
    public:
    Complex(int r,int i)
    {
        real = r;
        imag = i;
    }
    int get_real(){
        return real;
    }
    int get_imag()
    {
        return imag;
    }
    void display(Complex c1){
        cout << c1.get_real()<<"+"<<c1.get_imag()<<"i"<<endl;
    }
    void add(Complex c1)
    {
        cout << c1.get_real()+real<<"+"<<c1.get_imag()+imag <<"i"<<endl;
    }
    void multiply(Complex c1)
    {
        cout << c1.get_real()*real<<"+"<<c1.get_imag()*imag <<"i"<<endl;
    }
    void diff(Complex c1)
    {
        cout << real - c1.get_real()<<"+"<<imag-c1.get_imag()<<"i"<<endl;
    }
    
};
int main()
{
    Complex c1(4,5);
    Complex c2(2,3);
    cout << "The entered complex numbers are "<<endl;
    c1.display(c1);
    c2.display(c2);
    cout << "Product of two number:";
    c1.multiply(c2);
    cout << "Addition of two number:";
    c1.add(c2);
    cout << "Difference of two number:";
    c1.diff(c2);

}