#include<iostream>
using namespace std;
class Des;
class Source
{
	public:
	int x;
	Source(int s)
	{
		x=s;
	}
	operator Des()
	{
		Des de(x);
		return de; 
	}
	operator int()
	{
		return x;
	}
};
class Des
{
	int d;
	public:
		Des()
		{
			
		}
		Des(Source& s)
		{
			d=s.x;
		}
		
		Des(int x)
		{
			d=x;
		}
		void show()
		{
			cout<<d;
		}
		void change(int a)
		{
			d=a;
		}
};
int main()
{
	//int x;
	Source s1(10);
	int x=s1;
	cout<<x;
	Des d,d1;
	d=s1;//copy constructor
	d1=10;
	d1.show();
	return 0;
}
