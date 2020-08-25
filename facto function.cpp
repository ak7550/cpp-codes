#include<iostream>
#include<string>
using namespace std;
void swap_a(string p, string q)
{
	string k=p;
	p=q;
	q=k;
	cout<<"After swapping the values by call by value into the function body a and b is : "<<endl;
	cout<<"a="<<p<<" b="<<q;
	
}
void swap(string &p, string &q)// using reference parameter
{
	string k;
	k=p;
	p=q;
	q=k;
}
int main()
{
	string a,b;
	cout<<"Enter the values of a and b: ";
	cin>>a>>b;
	swap_a(a,b);
	cout<<"After swapping the values by call by value in to the main function is  a and b is : "<<endl;
	cout<<"a="<<a<<" b="<<b;
	swap(a,b); // call by reference
	cout<<"After swapping the values after call by refeerence of a and b is : "<<endl;
	cout<<"a="<<a<<" b="<<b;
}
