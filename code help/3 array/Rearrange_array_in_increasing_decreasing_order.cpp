#include<iostream>
using namespace std;
int sorti(int p[],int n)
{
    int count=1;
    while(count<n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(p[i]>p[i+1])
            {
                swap(p[i],p[i+1]);
            }
        }
        count++;
    }
}
int arrange(int p[],int n)
{
    sorti(p,n);
    int s=n/2,e=n-1;
    while(s<e)
    {
        swap(p[s],p[e]);
        s++;
        e--;
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
    cout<<"Enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    arrange(data,n);
    print(data,n);
}