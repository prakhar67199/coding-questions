#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int counter=1;
    while(counter<n)
    {
    for(int i=0;i<n-counter;i++)
    {
        if(data[i]>data[i+1])
        {
        //    int temp=data[i+1];
        //    data[i+1]=data[i];
        //    data[i]=temp;
        swap(data[i],data[i+1]);
        }
    }
    counter++;
    }
    cout<<"elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}