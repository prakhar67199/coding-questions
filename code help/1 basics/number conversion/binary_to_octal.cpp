#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number in binary: ";
    cin>>n;
    int ans=0,i=0;
    while(n!=0)
    {
        int d=n%10;
        ans=ans+(d*pow(2,i));
        n=n/10;
        i++;
    }
    int ans1=0,j=0;
    while(ans!=0)
    {
        int octal=ans%8;
        ans1=(octal*pow(10,j))+ans1;
        ans=ans/8;
        j++;
    }
    cout<<ans1;
}