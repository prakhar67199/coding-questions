#include<iostream>
using namespace std;
void merge(int p[],int l,int mid,int r)
{
    int i=l;
    int j=mid+1;
    int k=l;
    int b[r];
    while(i<=mid&&j<=r)
    {
        if(p[i]<=p[j])
        {
            b[k]=p[i];
            i++;
        }
        else
        {
            b[k]=p[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        for(int q=j;q<=r;q++)
        {
            b[k]=p[q];
            k++;
        }
    }
    else
    {
        for(int q=i;q<=mid;q++)
        {
            b[k]=p[q];
            k++;
        }
    }
    for(int m=l;m<=r;m++)
    {
        p[m]=b[m];
    }
}
void mergesort(int p[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(p,l,mid-1);
        mergesort(p,mid+1,r);
        merge(p,l,mid,r);
    }
    
}
void print(int p[],int k)
{
    for(int i=0;i<k;i++)
    {
        cout<<p[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the array size: ";
    cin>>n;
    int l=0;
    int r=n-1;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    mergesort(data,l,r);
    print(data,n);
    return 0;
}