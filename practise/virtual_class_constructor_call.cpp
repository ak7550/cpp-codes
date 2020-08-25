#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"Default Base\n";
		}
		Base(int x)
		{
			cout<<"Paramiterised Base\n";
		}
};
class Der1:virtual public Base
{
	public:
		Der1():Base()
		{
			cout<<"Default Der1\n";
		}
		Der1(int x):Base(x)
		{
			cout<<"paramiterised Der1\n";
		}
};
class Der2:virtual public Base
{
	public:
		Der2():Base()
		{
			cout<<"Default Der2\n";
		}
		Der2(int x):Base(x) // as base class is virtual, only the default constructor will get called.
		{
			cout<<"paramiterised Der2\n";
		}
};
class Gd:public Der2, public Der1
{
	public:
		Gd():Der1(),Der2()
		{
			cout<<"Default Gd\n";
		}
		Gd(int x):Der1(x),Der2(x),Base(x) //to call the base class paramiterised constructor forcefully.
		{
			cout<<"Paramiterised Gd\n";
		}
};
int main()
{
	Gd g(9);
	return 0;
}
