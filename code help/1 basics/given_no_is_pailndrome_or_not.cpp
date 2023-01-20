#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int num=n,ans=0;
    while(n!=0)
    {
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    if(ans==num)
    {
        cout<<"number is pailndrome";
    }
    else
    {
        cout<<"number is not pailndrome";
    }
}