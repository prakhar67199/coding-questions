#include<iostream>
using namespace std;
int addbegin(int *p,int n,int num)
{
    p[n-1]=num;
}
int main()
{
    int n,num;
    cout<<"Enter the array size and value: ";
    cin>>n>>num;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n-1;i++)
    {
        cin>>data[i];
    }
    addbegin(data,n,num);
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
}