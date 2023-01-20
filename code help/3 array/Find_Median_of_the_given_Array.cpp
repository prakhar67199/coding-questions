#include<iostream>
using namespace std;
int sot(int p[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[j]<p[i])
            {
                swap(p[j],p[i]);
            }
        }
    }
}
float median(int p[],int n)
{
    if(n%2==0)
    {
        return (p[(n/2)-1]+p[(n/2)])/2;
    }
    else
    {
        return (p[(n+1)/2]);
    }
}
int main()
{
    int n;
    cout<<"enter the array size :  ";
    cin>>n;
    int data[n];
    cout<<"enter the arrray element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    sot(data,n);
     cout<<median(data,n)<<endl;
}