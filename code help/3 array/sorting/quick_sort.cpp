#include<iostream>
using namespace std;
int partition(int p[],int l,int r)
{
    int piviot=p[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(p[j]<piviot)
        {
            i++;
            swap(p[i],p[j]);
        }
    }
    swap(p[i+1],p[r]);
    return i+1;
}
void quick(int p[],int l,int r)
{
    if(l<r)
    {
        int pi = partition(p,l,r);
        quick(p,l,pi-1);
        quick(p,pi+1,r);
    }
    
}
void print(int p[],int k)
{
    for(int i=0;i<k;i++)
    {
        cout<<p[i]<<" ";
    }cout<<endl;
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    int l=0;
    int r=n-1;
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    quick(data,l,r);
    print(data,n);
    return 0;
}