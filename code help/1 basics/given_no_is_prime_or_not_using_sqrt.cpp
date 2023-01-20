#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    bool flag=0;
    cout<<"enter the number:";
    cin>>n;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime no";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"no is prime number";
    }
    return 0;
}