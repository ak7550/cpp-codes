#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fp;
    fp.open("sample.txt",ios::out);
    if(!fp)
        cout<<"File doesn't exist.";
    else
    {
        cout<<"File opened.\n";
        fp<<"Hello world, This is Ak here.\n"; // to insert something in the out mode.
        fp.close();
    }
    return 0;
}