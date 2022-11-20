#include<iostream>
#include<limits.h>
using namespace std;
int first(int p[],int n,int k)
{
    int s=0;
    int e=n-1;
    int ans = INT_MIN;   
    while(s<=e)
    {
        int m=s + (e-s)/2;
        if(p[m]==k)
        {
            e = m-1;
            ans = m;
        }
        else if(k>p[m])
        {
            s=m+1;
        }
        else
        {
            e=m-1;

        }
    }
    return ans;
}
int last(int q[],int n,int k)
{
    int s = 0,e = n-1;
    int ans = INT_MIN;
    while(s <= e)
    {
        int m = s + (e-s)/2;
        if( q[m] == k)
        {
            s = m+1;
            ans = m;
        }
        else if(k > q[m])
        {
            s = m + 1;
        }
        else
        {
            e=m-1;
        }
    }
    return ans;
}
int main()
{
    int n,key;
    cout<<"enter the size of an array and searching key: ";
    cin>>n>>key;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[n];
    }
    cout<<" first and last occurance are : "<<first(data,n,key)<<" "<<last(data,n,key);
    return 0;
}