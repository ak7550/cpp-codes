#include<iostream>
using namespace std;
class Vehicle
{
    public:
    virtual void features()=0; // pure virtual function defined.
    /*{
        cout<<"Vehicle\n";
    }*/
     ~Vehicle(); // pure virtual destructor, definition is medatory for this.
};
Vehicle::~Vehicle()
{
    cout<<"delete vehicle\n";
}
class Cycle:public Vehicle
{
    public:
    void features()
    {
        cout<<"Cycle\n";
    }
    ~Cycle()
    {
        cout<<"delete cycle\n";
    }
};
class Motor:public Vehicle
{
    public:
    void features()
    {
        cout<<"Motor\n";
    }
    ~Motor()
    {
        cout<<"delete motor\n";
    }
};
class Runner
{
    public:
    void load(Vehicle* t)
    {
        t->features();
    }
};
int main()
{
    Vehicle *vh; // you must initialize it as a pointer, otherwise all the time it;s gonna invoke the base class function.
    Runner r;
    //r.load(vh);
    Cycle cy;
    vh=&cy;
    delete(vh);
    //cy.features();
    return 0;
}
