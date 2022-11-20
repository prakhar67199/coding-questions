#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the value";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(n==i)
    {
        cout<<"no is prime number";
    }
    else
    {
      cout<<"no is not prime number";
    }
    return 0;
}