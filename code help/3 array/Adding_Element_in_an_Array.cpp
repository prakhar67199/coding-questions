#include<iostream>
using namespace std;
void addbegin(int *p,int n,int value)
{
    for(int i=n-1;i>=0;i--)
    {
        p[i+1]=p[i];
    }
    p[0]=value;
}
int main()
{
    int n,num;
    cout<<"enter the array size and element value: ";
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