#include<iostream>
using namespace std;
int sum(int p[],int k)
{
    int s=0;
    for(int i=0;i<k;i++)
    {
        s=s+p[i];
    }
    return s;
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[10000];
    cout<<"enter the elements of an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"sum of an array element is: "<<sum(data,n)<<endl;
}
