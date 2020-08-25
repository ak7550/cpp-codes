#include<iostream>
#include<string>
using namespace std;
int x=100,y=120;
//std::cout<<x<<y;
namespace ns1
{
	int m=0,n=1;
	void f()
	{
		cout<<"ns1";
	}
}
namespace ns2
{
	string m="Aniket",n="kumar";
	void f()
	{
		cout<<"ns2"<<endl;
	}
}
//using namespace ns1;
namespace ns1
	{
		int x=23,y=78;
	}
int main()
{
	using namespace ns2;
	f();
	cout<<m<<n<<endl;
	//using namespace ns2;
	ns1::f();
	
	return 0;
}
//using namespace std;

