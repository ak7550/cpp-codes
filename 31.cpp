#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
class Complex
{
private:
    int real, img;
public:
    Complex(int=0,int=0);
    
    ~Complex();
};

Complex::Complex(int a=0,int b=0)
{
    real=a;
    img=b;
}

Complex::~Complex()
{
}

int main()
{

}