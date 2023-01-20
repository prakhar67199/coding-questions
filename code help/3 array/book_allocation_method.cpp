#include<iostream>
using namespace std;
bool ispossiblesol(int p[],int n,int m,int mid)
{
    int stucount=1;
    int pagesum=0;
    for(int i=0;i<n;i++)
    {
        if(pagesum+p[i]<=mid)
        {
            pagesum+=p[i];
        }
        else
        {
            stucount++;
            if(stucount>m||p[i]>mid)
            {
                return 0;
            }
            pagesum=p[i];
        }
    }
    return 1;
}
int book(int p[],int n,int m)
{
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        sum=sum+p[i];
    }
    int e=sum;
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
    cout<<"enter the size of an array and number of students: ";
    cin>>n>>m;
    int data[n];
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<book(data,n,m)<<endl;
}