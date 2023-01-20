#include<iostream>
using namespace std;
int equi(int p[],int n)
{
    int ts=0;
    for(int i=0;i<n;i++)
    {
        ts=ts+p[i];
    }
    int ls=0,rs=ts;
    for(int i=0;i<n;i++)
    {
        rs=ts-p[i];
        if(ls==rs)
        {
            return i;
        }
        ls=ls+p[i];
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the array size: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int value=equi(data,n);
    if(value>0)
    {
        cout<<"given array has Equilibrium at index "<<value;
    }
    else
    {
        cout<<"there is no Equilibrium index";
    }
}