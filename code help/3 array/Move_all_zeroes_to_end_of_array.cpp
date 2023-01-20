#include<iostream>
using namespace std;
void movezero(int p[],int m)
{
    int i=0;
    for(int j=0;j<m;j++)
    {
        if(p[j]!=0)
        {
            swap(p[j],p[i]);
            i++;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    movezero(data,n);
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}