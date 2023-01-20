//binary search on array
#include<iostream>
using namespace std;
int bs(int data[],int n,int k)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2; //mid = s+(e-s)/2
        if(data[mid]==k)
        {
            return mid;
        }
        else if(k < data[mid])
        {
         e=mid-1;
        }
        else
        {
            s=mid+1;
        }
                         //mid = s+(e-s)/2
    }
    return -1;
}
int main()
{
    int n,key;
    cout<<"enter the size of an array and key value: ";
    cin>>n>>key;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"your index number is: "<<bs(data,n,key)<<endl;
    return 0;
}