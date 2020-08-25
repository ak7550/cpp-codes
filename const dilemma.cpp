#include<iostream>
using namespace std;
int main()
{
	const int x=34,y=56;
	const int *p=&x;
	p=y;
	return 0;
}
