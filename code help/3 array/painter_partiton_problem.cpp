#include<iostream>
using namespace std;
bool ispossiblesol(int p[],int n,int m,int mid)
{
    int paintercount=1;
    int unit=0;
    for(int i=0;i<n;i++)
    {
        if(unit+p[i]<=mid)
        {
            unit+=p[i];
        }
        else
        {
            paintercount++;
            if(paintercount>m||p[i]>mid)
            {
                return 0;
            }
            unit=p[i];
        }
    }
    return 1;
}
int painter(int p[],int n,int m)
{
    int s=0;
    int ans=-1,sum=0;
    int e=0;
    for(int i=0;i<n;i++)
    {
        sum+=p[i];
    }
    e=sum;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(ispossiblesol(p,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n,m;
    cout<<"Enter the size of an array and no of painters: ";
    cin>>n>>m;
    int data[n];
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<painter(data,n,m);
}