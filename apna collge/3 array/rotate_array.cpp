#include<iostream>
using namespace std;
void rotate(int p[],int m,int k)
{
    int j;
    int q[m];
    // copy the value in another array
    for(j=0;j<m;j++)
    {
      q[(j+k)%m]=p[j];
    }
    //store the value in original array
    for(j=0;j<m;j++)
    {
        p[j]=q[j];
    }
}
int main()
{
    int n,k;
    cout<<"enter the size of an array and moving value: ";
    cin>>n>>k;
    int data[n];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    rotate(data,n,k);
   for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
     return 0;
}