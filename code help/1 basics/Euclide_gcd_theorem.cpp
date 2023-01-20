#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else
    {
        while(a!=b)
        {
            if(a>b)
            {
                a=a-b;
            }
            if(b>a)
            {
                b=b-a;
            }
        }
        return a;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the value of a,b: ";
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<ans;
    return 0;
}