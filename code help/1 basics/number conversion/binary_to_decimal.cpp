#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int ans=0,i=0;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0)
    {
        int digit = n%10;
        ans= ans+digit*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<"your no is : "<<ans;
    return 0;
}