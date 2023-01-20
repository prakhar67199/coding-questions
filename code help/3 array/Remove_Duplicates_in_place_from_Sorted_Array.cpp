#include<iostream>
using namespace std;
int duplicate(int p[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(p[i]!=p[j])
        {
            i++;
            p[i]=p[j];
        }
    }
    return i+1;
}
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int k= duplicate(data,n);
    for(int i=0;i<k;i++)
    {
        cout<<data[i]<<" ";
    }
}