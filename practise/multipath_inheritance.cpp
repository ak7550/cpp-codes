#include<iostream>
using namespace std;
class Human
{
private:
    /* data */
public:
    Human(/* args */);
    ~Human();
};

Human::Human(/* args */)
{
    cout<<"Human constructor\n";
}

Human::~Human()
{
    cout<<"Human Destructor.\n";
}
class Worker:public Human
{
private:
    /* data */
public:
    Worker(/* args */);
    void breathing()
    {
        cout<<"I'm breathing.\n";
    }
    ~Worker();
};

Worker::Worker(/* args */)
{
    cout<<"Worker Constructor\n";
}

Worker::~Worker()
{
    cout<<"Worker Destructor\n";
}

class Student:public Human
{
private:
    /* data */
public:
    Student(/* args */);
    ~Student();
};

Student::Student(/* args */)
{
    cout<<"Student Constructor.\n";
}

Student::~Student()
{
    cout<<"Student Destructor.\n";
}
class Bacha:public Student, public Worker
{
private:
    /* data */
public:
    Bacha(/* args */);
    ~Bacha();
};

Bacha::Bacha(/* args */)
{
    cout<<"Bacha Constructor\n";
}

Bacha::~Bacha()
{
    cout<<"Bacha Destructor\n";
}


int main()
{
    Bacha b;
    b.breathing();
    cout<<"Exe";
    return 0;
}