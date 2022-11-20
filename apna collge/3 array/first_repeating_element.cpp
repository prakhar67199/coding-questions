//first repeating element
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element value: ";
    for(int i=0;i<n;i++)
    {
      cin>>data[i];
    }
    const int n1=1e6+2;
    int temp[n1];
    for(int i=0;i<n1;i++)
    {
        temp[i]=-1;
    }
    int minno =INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(temp[data[i]]!=-1)
        {
            minno =min(minno,temp[data[i]]);
        }
        else
        {
            temp[data[n]]=i;
        }
    }
    if(minno==INT_MAX)
    {
         cout<<"all the elements are distinct ";
    }
    else
    {
         cout<<minno+1;
    }
    return 0;
}