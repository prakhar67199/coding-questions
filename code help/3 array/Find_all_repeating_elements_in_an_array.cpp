#include<iostream>
using namespace std;
void repeating(int p[],int n)
{
    int temp[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i]==p[j])
            {
                temp[count++]=p[i];
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        if(temp[i]!=temp[i+1])
        {
        cout<<temp[i]<<" ";
        }
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
    repeating(data,n);
}