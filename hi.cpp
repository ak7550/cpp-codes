#include<iostream>
using namespace std;
int main()
{
     int x=4;
    int const *ptr= &x;
   // ptr++;
    //x=6;
    x=90;
    //(&p)++;
    cout<<*ptr;
}
