#include<iostream>
using namespace std;
void insert(int p[],int k)
{
    for(int i=1;i<k;i++)
    {
        int cr=p[i];
        int j=i-1;
        while(p[j]>cr&&j>=0)
        {
            p[j+1]=p[j];
            j--;
        }
        p[j+1]=cr;
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
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    insert(data,n);
    print(data,n);
    return 0;
}