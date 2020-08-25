#include<iostream>
using namespace std;
class Sample
{
	int x,y;
	public:
		static float roi;
		Sample(int x, int y)
		{
			this->x=x;
			this->y=y;
			this->roi=x+y;
			cout<<"roi is: "<<roi<<endl; 
		}
		static void fun1()
		{
			cout<<"fun1";
			roi++;
			cout<<"roi after static fun1 is: "<<roi<<endl;
		}
		void fun2()
		{
			cout<<"fun2";
			cout<<"\nroi is: "<<roi;
			this->fun1();
			roi++; // accessing a static member from a non static function.
			// it works absoulutely fine.
			cout<<"\nAfter the increment in non static method\n roi is: "<<roi;
		}
};
float Sample::roi=25;
int main()
{
	Sample s1(23,45);
	cout<<Sample::roi<<endl;
	s1.fun1();
	s1.fun2();
	Sample::fun1();
	return 0;
}
