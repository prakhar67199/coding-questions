#include<iostream>
using namespace std;
void merge(int p[],int s1,int q[],int s2,int r[])
{
    int i=0,j=0,k=0;
    while(i<s1&&j<s2)
    {
        if(p[i]<q[j])
        {
            r[k]=p[i];
            i++;
            k++;
        }
        else
        {
           r[k]=q[j];
           j++;
           k++;
        }
    }
    while(i<s1)
    {
        r[k]=p[i];
        k++;
        i++;
    }
    while(j<s2)
    {
      r[k]=q[j];
      k++;
      j++;
    }

}
void print(int r[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<r[i]<<" ";
    }
}
int main()
{
    int n,m;
    cout<<"enter the size of 1st array : ";
    cin>>n;
    cout<<"enter the size of 2nd array : ";
    cin>>m;
    int data1[n];
    int data2[m];
    int k=m+n;
    int data3[k];
    cout<<"enter the 1st array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>data1[i];
    }
    cout<<"enter the 2nd array elements: ";
    for(int i=0;i<m;i++)
    {
        cin>>data2[i];
    }  
    merge(data1,n,data2,m,data3);
    print(data3,k);
    return 0;
}