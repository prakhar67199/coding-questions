#include<iostream>
using namespace std;
bool bs(int arr[],int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool remaining =bs(arr+1,n-1);
        return remaining;
    }
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    bool ans=bs(p,n);
    if(ans)
    {
        cout<<"array is sorted";
    }
    else
    {
        cout<<"array is not sorted";
    }
    delete []p;
}