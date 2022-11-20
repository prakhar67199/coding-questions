//insertion sort
#include<iostream>
using  namespace std;
int main()
{
    int n;
    cout<<"enter thesize of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    for(int i=1;i<n;i++)
    {
        int cr =data[i];
        int j=i-1;
        while(data[j]>cr&&j>=0)
        {
            data[j+1]=data[j];
            j--;
        } 
        data[j+1]=cr;
       
    }
     for(int i=0;i<n;i++)
        {
            cout<<data[i]<<" ";
        }
        return 0;
}