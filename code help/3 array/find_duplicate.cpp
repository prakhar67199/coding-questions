#include<iostream>
using namespace std;
int duplicate(int p[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^p[i];
    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int ans = duplicate(data,n);
    cout<<ans;
}