#include<iostream>
using namespace std;
int addbegin(int *p,int n,int num,int pos)
{
    for(int i=n-1;i>=pos;i--)
    {
        p[i+1]=p[i];
    }
    p[pos]=num;
}
int main()
{
    int n,num,pos;
    cout<<"Enter the array size and value and position: ";
    cin>>n>>num>>pos;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n-1;i++)
    {
        cin>>data[i];
    }
    addbegin(data,n,num,pos);
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
}