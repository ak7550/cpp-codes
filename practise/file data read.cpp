#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fp;
    char ch;
    fp.open("sample.txt",ios::in);
    if(!fp)
        cout<<"File doesn't exist.";
    else
    {
        cout<<"File opened.\n";
        while (!fp.eof()) // till we are not reaching the end of the file.
        {
            fp>>ch;
            cout<<ch;
        }
       fp.close(); 
    }
    return 0;
} 
