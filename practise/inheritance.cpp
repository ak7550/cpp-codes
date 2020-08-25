#include<iostream>
using namespace std;

class bb
{
	public:
		bb()
		{
			cout<<"in bb";
		}
};
class Base1:virtual public bb
{
	public:
	Base1()
	{
		cout<<"in base1";
	}
};
class Base2:virtual public bb
{
	public:
		Base2()
		{
			cout<<"in base2";
		}
};
class Der:public Base1,public Base2
{
	public:
	Der()
	{
		cout<<"in der";
	}
};
int main()
{
	Der d;
	return 0;
}
