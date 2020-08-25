#include<iostream>
using namespace std;
class Relational
{
	int x;
	public:
		Relational(int a)
		{
			x=a;
		}
		bool operator <(const Relational &w)
		{
			return (x<w.x)?true:false;
		}
};
int main()
{
	Relational r1(5),r2(10);
	if(r1>r2)
		cout<<"true";
	return 0;
}
