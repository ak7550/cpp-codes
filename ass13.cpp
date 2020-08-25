#include<iostream>
using namespace std;
inline int add(int x, int y, int z)// ukr may ask you hell lot of questions related to inline functions, it's advantage, disadvantages and all that thing. Study all available things related to inline function from GEEKS FOR GEEKS.
{
	return x+y+z;
}
int main()
{
	int a,b,c;
	cout<<"Enter the values to add: ";
	cin>>a>>b>>c;
	cout<<"Added value of "<<a<<" "<<b<<" "<<c<<" is: "<<add(a,b,c);
	return 0;
}
