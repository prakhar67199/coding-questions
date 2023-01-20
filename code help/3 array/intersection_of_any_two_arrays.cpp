#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int i=0,j=0;
    cout<<"enter the size of 1st and 2nd array: ";
    cin>>n>>m;
    int data1[n],data2[m];
    cout<<"enter the 1st array element: ";
    for(i=0;i<n;i++)
    {
        cin>>data1[i];
    }
    cout<<"enter the 2nd array element: ";
    for(j=0;j<m;j++)
    {
        cin>>data2[j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(data1[i]==data2[j])
            {
                cout<<data1[i]<<" ";
            }
               
        }
    }
    
}