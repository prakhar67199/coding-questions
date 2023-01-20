#include<iostream>
using namespace std;
int sumofavg(int p[],int n)
{
    int c=0,avg=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+p[i];
        c++;
    }
    avg=sum/c;
    return avg;
}
int main()
{
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<sumofavg(data,n);
}