#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
	void set(int x, int y)
	{
		a=x;
		b=y;
	}
	void dis()
	{
		cout<<a<<b<<endl;
	}
	Complex operator +(Complex& c)
	{
		Complex c1;
		c1.a=a+c.a;
		c1.b=b+c.b;
		cout<<c1.a<<c1.b;
		return c1;
	}
	friend ostream& operator << (ostream&, Complex&);
	friend istream& operator >> (istream&, Complex&);
};
ostream& operator <<(ostream& ak, Complex& c)
{
	ak<<c.a<<c.b<<endl;
	c.dis();
	return ak;
}
istream& operator >>(istream& ak, Complex& c)
{
	ak>>c.a>>c.b;
	return ak;
}
int main()
{
	Complex c1,c2,c3;
	cout<<"Enter the values for c1 and c2: ";
	cin>>c1>>c2;
	c3=c1+c2;
	cout<<"c3 :="<<c3;
	return 0;
}
