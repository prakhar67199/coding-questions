#include<iostream>
using namespace std;
bool istrue(int p[],int m)
{
    int i,count=0,s=0;
    if(m==0)
    {
        return -1;
    }
    else if(m==1)
    {
        return 1;
    }
    else
    {
    for(i=1;i<m;i++)
    {
        if(p[i-1]>p[i])
        {
            count++;
        }

    }
    }
    if(p[m-1]>p[s])
    {
        count++;
    }
    return count<=1;
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    if(n==0)
    {
        cout<<"invalid array";
        return 0;
    }
    int data[n];
    cout<<"enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"array is "<<istrue(data,n);
    return 0;
}