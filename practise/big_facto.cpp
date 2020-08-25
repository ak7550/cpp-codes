#include<iostream>
using namespace std;
int facto_count(int);
void printarr(int[], int);
int main()
{
    int n;
    cout<<"Enter the value to count the factorial: ";
    cin>>n;
    cout<<"The numbers present in the factorial of "<<n<<" is: "<<facto_count(n);
    return 0;
}
int facto_count(int n)
{
    int fac[100],mul=1,rem=0,count=0,no=n;
    while (n!=0) // first insert the n inside of the array.
    {
        fac[count++]=n%10; // count counts the number till which the array has been filled.
        n/=10;
    }
    printarr(fac,count);
    for(int i=2; i<no;i++) // traversing through the values from 2 to n-1 to multiply them one by one.
    {
        rem=0; //everytime rem will initialize itself at the time of restart of the inner loop.
        for (int j = 0; j < count; j++)
        {
            mul=i*fac[j]+rem;
            fac[j]=mul%10;
            rem=mul/10;
        } // till rem is containing some value, now count will get increased.
        while (rem!=0)
        {
            fac[count++]=rem%10;
            rem/=10;
        }
        cout<<"After being multiplied with "<<i<<" the array is: \n";
        printarr(fac,count);        
    }
    return count;
}
void printarr(int arr[], int n)
{
    cout<<"The array is: \n";
    for(int i=0;i<n;i++)
        cout<<arr[i];
    cout<<endl;
}