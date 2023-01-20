#include<iostream>
using namespace std;
int sumi(int p[],int n)
{
    int sum=0;
    if(n==0)
    {
        return 0;
    }
    else 
    {
        return p[0]+sumi(p+1,n-1);
    }
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<sumi(data,n);
}