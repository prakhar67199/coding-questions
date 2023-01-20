#include<iostream>
using namespace std;
bool subsetof(int p[],int n,int q[],int m)
{
    if(n>m)
    {
        return false;
    }
    for(int i=0;i<n;i++)
    {
        bool temp=false;
        for(int j=0;j<m;j++)
        {
            if(p[i]==q[j])
            {
                temp=true;
                break;
            }
        }
        if(temp==false)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m;
    cout<<"enter the 1st array size : ";
    cin>>n;
    cout<<"enter the 2nd array size : ";
    cin>>m;
    int data1[n];
    int data2[m];
    cout<<"Enter the 1st array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data1[i];
    }
    cout<<"Enter the 2nd array element: ";
    for(int i=0;i<m;i++)
    {
        cin>>data2[i];
    }
    bool value=subsetof(data1,n,data2,m);
    if(value==true)
    {
        cout<<"given array is subset of main array";
    }
    else
    {
        cout<<"given array is not subset ";
    }
}