#include<iostream>
using namespace std;
void find_prime(int n)
{
    bool prime[n+1];
    for (int i = 0; i <=n; i++)
        prime[i]=true;
    for (int i = 2; i*i<=n; i++) // if n=50, then 7*7=49 that's not prime, we need to make it false aas well.
    {
        if(prime[i])// if it's true, then update all of it's multiples as false.
        {
            for (int j = i*i; j <=n; j+=i)
                prime[j]=false;
        }
    }
    cout<<"The prime numbers are: ";
    for (int i = 2; i<=n; i++)
    {
        if(prime[i])
            cout<<i<<" ";
    }
}
int main()
{
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    find_prime(limit);
    return 0;
}