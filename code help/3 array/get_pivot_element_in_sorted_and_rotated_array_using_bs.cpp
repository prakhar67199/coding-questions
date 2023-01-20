#include<iostream>
using namespace std;
int pivot(int data[],int n)
{
    int s=0;
    int e=n;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(data[mid]>=data[0])
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
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the values of array : ";
    for(int i=0;i<=n;i++)
    {
        cin>>data[n];
    }
    cout<<"piviot element is: "<<pivot(data,n);
    return 0;
}