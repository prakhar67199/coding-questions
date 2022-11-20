#include <iostream>
using namespace std;
int peak(int p[],int n)
{
    int s=0;
    int e=n;
    while(s<e)
    {
        int mid=(s+e)/2;
        if(p[mid] < p[mid+1])
        {
            s=mid+1;
        }
        else 
        {
            e = mid;
        }   
    }
    return s; 
}
int main() 
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element values: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"peak element of array is : "<<peak(data,n)<<endl;
    return 0;
}