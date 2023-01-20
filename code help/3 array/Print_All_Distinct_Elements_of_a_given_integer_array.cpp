#include<iostream>
using namespace std;
int distinct(int p[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            if(p[j]==p[i])
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<p[i]<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    distinct(data,n);
}