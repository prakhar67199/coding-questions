#include<iostream>
using namespace std;
void bubble(int p[],int n)
{
    int count=1;
    while(count<n)
    {
    for(int i=0;i<n;i++)
    {
        if(p[i]>p[i+1])
        {
            swap(p[i],p[i+1]);
        }
    }
    count++;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an element: ";
    cin>>n;
    int data[n];
    cout<<"Enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    bubble(data,n);
    int j=0;
    cout<<"second smallest element is"<<data[j+1]<<endl;
    cout<<"second largest element is "<<data[n-2]<<endl;
}