#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter the 1st array  size: ";
    cin>>n1;
    int *a1=new int[n1];
    cout<<"enter the value of array: ";
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    cout<<"enter the 2nd array  size: ";
    cin>>n2;
    int *a2=new int[n2];
    cout<<"enter the value of array: ";
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }
    int m=max(n1,n2);
    int *ans=new int[m];
    int i=n1-1;
    int j=n2-1;
    int k=m-1;
    int carry;
    while(k>=0)
    {
        int sum =carry;
        if(i>=0)
        {
            sum =sum+a1[i];
        }
        if(j>=0)
        {
            sum =sum+a2[j];
        }
        int q=sum/10;
        int r=sum%10;
        ans[k]=r;
        carry=q;
        i--;
        j--;
        k--;
    }
    if(carry!=0)
    {
        cout<<carry<<" ";
    }
    for(int i=0;i<m;i++)
    {
        cout<<ans[i]<<" ";
    }
}