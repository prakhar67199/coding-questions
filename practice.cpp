#include<bits/stdc++.h>
using namespace std;
int element(int p[],int n)
{
    int mini=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mini=max(mini,p[i]);
    }
    cout<<mini;
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array elment: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    element(data,n);
}