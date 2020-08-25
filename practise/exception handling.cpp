#include<iostream>
using namespace std;
int main()
{
    int a=5, b=0,c;
    try
    {
        if(b==0)
        throw b;
        cout<<a/b<<endl;
    }
    catch(int e)
    {
        cout<<e;
    }
    
    return 0;
}