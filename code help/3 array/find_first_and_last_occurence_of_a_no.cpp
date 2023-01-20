#include<iostream>
using namespace std;
int loc(int p[],int n,int k)
{
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(k==p[mid])
        {
            ans=mid;
            s=mid+1;
        }
        else if(k>p[mid])
        {
            s=mid+1;
        }
        else if(k<p[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int foc(int p[],int n,int k)
{
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(k==p[mid])
        {
            ans=mid;
            e=mid-1;
        }
        else if(k>p[mid])
        {
            s=mid+1;
        }
        else if(k<p[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n,key;
    cout<<"Enter the size of an array and key value: ";
    cin>>n>>key;
    int data[n];
    cout<<"Ente the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int ans1=foc(data,n,key);
    int ans2=loc(data,n,key);
    cout<<ans1<<" "<<ans2<<endl;
}