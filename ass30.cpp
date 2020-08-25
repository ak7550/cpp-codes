#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
class Point
{
    float x,y;
    public:
    Point()
    {
        x=y=0;
    }
    Point(float x, float y)
    {
        this->x=x;
        this->y=y;
    }
    void getData()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }
    float operator - (Point &s)
    {
        return sqrt(pow(x-s.x,2)+pow(y-s.y,2));
    }
};
int main()
{
    srand(time(0));
    Point a(rand()%10,rand()%10),b(rand()%10,rand()%10);
    cout<<"a is: "<<endl;
    a.getData();
    cout<<"b is: "<<endl;
    b.getData();
    cout<<"The distance between the points a and b is: "<<a-b;
}