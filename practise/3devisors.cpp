#include<iostream>
#include<math.h>
using namespace std;
void findprime(int n)
{
    bool prime[n+1];
    int k=0,non_prime=0;
    for (int i = 0; i <=n; i++)
        prime[i]=true;
    for (int i = 2; i*i<=n; i++) // if n=50, then 7*7=49 that's not prime, we need to make it false aas well.
    {
        if(prime[i])// if it's true, then update all of it's multiples as false.
        {
            for (int j = i*i; j <=n; j+=i)
            {
                prime[j]=false;
                non_prime++;
            }
        }
    } // the index which are storing the true values are only prime now.
    int arr[n-non_prime];
    for (int i = 2; i<=n; i++)
    {
        if(prime[i])
            arr[k++]=i;
    }
    //return arr;
}
void three_devisor(int n)
{
    
    bool prime[n+1];
    int k=0,non_prime=0;
    for (int i = 0; i <=n; i++)
        prime[i]=true;
    for (int i = 2; i*i<=n; i++) // if n=50, then 7*7=49 that's not prime, we need to make it false aas well.
    {
        if(prime[i])// if it's true, then update all of it's multiples as false.
        {
            for (int j = i*i; j <=n; j+=i)
            {
                prime[j]=false;
                non_prime++;
            }
        }
    } // the index which are storing the true values are only prime now.
    int arr[n-non_prime];
    for (int i = 2; i<=n; i++)
    {
        if(prime[i])
            arr[k++]=i;
    }
    cout<<"The prime numbers in the given range are: \n";
    for (int i = 0; i < k; i++)
        cout<<arr[i]<<" ";
    
    
    int count=0;
    cout<<"\n 3devisors are: \n";
    for (int i = 4; i <=n; i++)
    {
        if((int)sqrt(i)==arr[count])
        {
            cout<<i<<" ";
            count++;
        }
    }
}
int main()
{
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    three_devisor(limit);
    return 0;
}