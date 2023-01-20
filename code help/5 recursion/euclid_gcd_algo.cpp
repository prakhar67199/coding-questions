#include<iostream>
using namespace std;
int no(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    int ans=no(a,b/2);
    if(b%2==0)
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }
}
int main()
{
    int num,powi;
    cout<<"enter the number and respective power: ";
    cin>>num>>powi;
    int ans=no(num,powi);
    cout<<ans<<endl;
}