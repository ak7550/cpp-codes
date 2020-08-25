#include<iostream>
#include<string.h>
using namespace std;
template <typename t1, typename t2>
	t2 sum(t1 a,t2 b)
	{
		return a+b;//typecasting
	}
template <typename t1, typename t2> // this template declaration is necessary before the definition of all the functions.
	t1 sub(t1 a, t2 b)
	{
		return a-b;
	}

int main()
{
	cout<<sum<>(3,5)<<endl;
	cout<<sub(3,5)<<endl;
	cout<<sum(30,5.6)<<endl;
	cout<<sub(32.78,45)<<endl;
	//cout<<sum("aniket"," kumar");
	return 0;
}
