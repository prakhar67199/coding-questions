#include<iostream>
using namespace std;
int bubble(int*p,int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(p[i]>p[i+1])
        {
        swap(p[i],p[i+1]);
        }
    }
    bubble(p,n-1);
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    bubble(data,n);
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
}