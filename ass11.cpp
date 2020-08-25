#include<iostream>
using namespace std;
// when we declare some variable or argument with const key word infront of it. It means the valriable or the argument is a read only. In case of read only, as the name suggests assignment of any value to that location is possible for only one time. After the assignment if we try to the change the value that is stored into the variable. The Compiler will show an error message as const is read only, once you have stored the data, you cannot change it, just reading or fetching is possible nothing else.
int facto(const int &n) //function parameter as read only reference.
{
	int mul=1;
	for(int i=1;i<=n;i++)
	mul*=i;
	return mul;
}
int main()
{
	int n;
	cout<<"Enter the number to get the factorial: ";
	cin>>n;
	cout<<"Factorial of "<<n<<" is: "<<facto(n);
	return 0;
}
