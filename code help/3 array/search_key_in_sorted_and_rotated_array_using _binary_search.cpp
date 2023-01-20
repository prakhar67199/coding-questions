#include<iostream>
using namespace std;
int bs(int p[],int s,int e,int key)
{
    int start=s;
    int end=e;
    while(s<=e)
    {
        int mid=start+(end-start)/2;
        if(p[mid]==key)
        {
            return mid;
        }
        else if(key>p[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int getpiviot(int p[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(p[mid]>=p[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}
int getpos(int p[],int n,int key)
{
    int piviot=getpiviot(p,n);
    if(key>=p[piviot]&&key<=p[n-1])
    {
        return bs(p,piviot-1,n-1,key);
    }
    else
    {
        return bs(p,0,piviot-1,key);
    }
}
int main()
{
    int n,key;
    cout<<"Enter the size of an array and key value: ";
    cin>>n>>key;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int final=getpos(data,n,key);
    cout<<final<<endl;
}