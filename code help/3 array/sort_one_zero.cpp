#include<iostream>
using namespace std;
void sort(int p[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        while(p[s]==0)
        {
            s++;
        }
        while(p[e]==1)
        {
            e--;
        }
        if(s<e)
        {
        swap(p[s],p[e]);
        s++;
        e--;
        }
    }
}
void print(int p[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of an aray: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    sort(data,n);
    print(data,n);
}