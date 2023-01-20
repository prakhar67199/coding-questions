#include<iostream>
using namespace std;
bool bs(int *p,int s,int e ,int k)
{
    if(s>e)
    {
        return 0;
    }
    int mid=s+(e-s)/2;
    if(p[mid]==k)
    {
        return 1;
    }
    else if(p[mid]<k)
    {
        return bs(p,mid+1,e,k);
    }
    else
    {
        return bs(p,s,mid-1,k);
    }
}
int main()
{
    int n,key;
    cout<<"enter the size of an array: ";
    cin>>n>>key;
    int data[n];
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int ans=bs(data,0,n-1,key);
    if(ans)
    {
        cout<<"Element is there";
    }
    else
    {
        cout<<"element is not there ";
    }
}