// running sum of array
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    for(i=1;i<n;i++)
    {
        data[i] = data[i-1]+data[i];
    }
    for(i=0;i<n;i++)
    {
    cout<<data[i]<<" ";
    }
    return 0;
}