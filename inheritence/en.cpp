#include<iostream>
using namespace std;
class Triangle
{
    private:
    int side1;
    int side2;
    int side3;

    public:
    Triangle(int s1,int s2, int s3):side1(s1),side2(s2),side3(s3) {}
    Triangle(Triangle &obj)
    {   

    }

};