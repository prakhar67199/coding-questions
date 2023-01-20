#include<iostream>
using namespace std;
int square(int n)
{
    int s=0,e=n;
    long long int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        long long int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        else if(square>n)
        {
            e=mid-1;
        }
        else 
        {
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
double moreprecise(int n,int pre,int ans)
{
    double factor=1;
    double value=ans;
    for(int i=0;i<pre;i++)
    {
        factor=factor/10;
        for(double j=value;j*j<n;j=j+factor)
        {
            value=j;
        }
    }
    return value;
}
int main()
{
    int n,pre;
    cout<<"enter the number and precision value : ";
    cin>>n>>pre;
    int ans=square(n);
    cout<<moreprecise(n,pre,ans);
}