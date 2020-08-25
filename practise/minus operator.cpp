#include<iostream>
using namespace std;
class Num
{
	int d;
	public:
	Num(int x)
	{
		d=x;
	}	
	void show()
	{
		cout<<"d is: "<<d;
	}
	Num* operator - ()
	{
		this->d*=-1;
		return this ;
	}
};
int main()
{
	Num n(90);
	-n;
	n.show();
	return 0;
}
