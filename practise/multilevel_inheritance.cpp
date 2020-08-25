#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout<<"A";
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"B";
    }
};
class C:public B
{
    public:
    void show()
    {
        cout<<"c";
    }
};
int main()
{
    C c;
    c.show();
    A *a=new B;
    a->show();
    a=&c;
    a->show();
    return 0;
}