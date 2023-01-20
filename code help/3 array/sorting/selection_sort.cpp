#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the element of array: ";
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(data[j]<data[i])
            {
                int temp =data[j];
                data[j]= data[i];
                data[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    cout<<data[i]<<" ";
    }
    return 0;
}
