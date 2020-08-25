#include<iostream>
using namespace std;
class Human
{
	protected:
	int data;
	public: 
	Human()
	{
		data=0;
	}
	void breath()
	{
		cout<<"breath";
	}
	void showData()
	{
		cout<<data;
	}
};
class Student:public Human{
	public:
	Student()
	{
		data+=2;
		cout<<"updated\n";
	}
};
class Worker:public Human{
	public:
	Worker()
	{
		data+=4;
		cout<<"updated\n";
	}
	/*void showData()
	{
		cout<<"in worker"
		cout<<data;
	}*/
};
class Ak:public virtual Student, public virtual Worker{
	public:
	Ak()
	{
		data+=6;
		cout<<"updated\n";
	}
	void showData()
	{
		cout<<"in worker";
		cout<<data;
	}
};
int main()
{
	Ak a;
	a.showData();
	return 0;
}

