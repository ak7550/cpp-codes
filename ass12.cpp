#include<iostream>
using namespace std;
char *strcpy(char *s)
{
	char *t=s;
	return t;
}
int main()
{
	const char source[]="Priyangana";
	char *str=source;
	char *target=strcpy(str);
	//target=strcpy(source);
	cout<<"The source string is: "<<*source;
	cout<<"Copied Target string is: "<<*target;
	return 0;
}
