#include<iostream>
using namespace std;
class Sample
{
	int x,aa;
	float p;
	public:
	Sample()
	{
		x=0;	
	}	
	Sample(int a)
	{
		x=a;
		cout<<"we are in paramiterised constructor.\n the size of the object is: "<<sizeof(this);
	}
	void operator += (Sample& s)
	{
		x+=s.x;
	}
	friend ostream& operator<<(ostream& ak, Sample& s);
	friend istream& operator>>(istream& ak, Sample& s);
	void setdata(int k)
	{
		x=k;
	}
};
ostream& operator<<(ostream& ak, Sample& s)
{
	ak<<s.x;
	return ak;
}
istream& operator>>(istream& ak, Sample& s)
{
	int a;
	cout<<"Enter the value of s: ";
	ak>>a;
	s.setdata(a);
	return ak;
}
int main()
{
	Sample s1,s2(5);
	cin>>s1;
	s2+=s1;
	cout<<s2;
	cout<<"size of int is: "<<sizeof(int);
	cout<<"size of object is: "<<sizeof(s2);

	return 0;
}
