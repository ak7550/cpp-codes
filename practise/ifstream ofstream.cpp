#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream fp; // stream class to write on files. By defualt the ios value is being set.
    string line;
    fp.open("sample.txt");
    (!fp)?cout<<"file doesn't exist.\n":cout<<"file opened.";
    while (1) // considering the file has opened, that is obvious in this case.
    {
        getline(cin, line); // read a line from the standard input, that has been stored into the line string.
        if(line=="-1")
        break;
        fp<<line<<endl; // write line in to the file.
        /*cin>>line;
        if(line=="-1")
        break;
        fp<<line+" \n";*/
    }
    fp.close();
    ifstream fi; // stream class to read on files. By default the ios value is set to read.
    fi.open("sample.txt");
    while (fi)
    {
        getline(fi,line); // using fin operator it's gonna take the lines present into the file and it will store them one by one in line string.
        cout<<line;
    }
    fi.close();
    return 0;
}