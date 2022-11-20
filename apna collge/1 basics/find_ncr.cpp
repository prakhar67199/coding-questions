#include<iostream>
using namespace std;
int fact(int num)
{
    int f=1;
    while(num>=1)
    {
        f=f*num;
        num--;
    }
    return f;
}
int main()
{
    int n,r,ans=0;
    cout<<"enter the value of n,r: ";
    cin>>n>>r;
    ans=fact(n)/(fact(r)*fact(n-r));
    cout<<"your answer will be: "<<ans<<endl;
}