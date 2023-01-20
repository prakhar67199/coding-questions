//sum of all subarray
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element:";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int sum=0,result=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+data[j];
            result=result+sum;
        }
        sum=0;
    }
    cout<<result;
    
}