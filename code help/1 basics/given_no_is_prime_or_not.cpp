#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number: ";
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i==n)
    {
        cout<<"entered number is prime number";
    }
    else
    {
       cout<<"entered number is not prime number";
    }
    return 0;
}