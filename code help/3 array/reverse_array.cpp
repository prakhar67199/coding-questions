#include<iostream>
using namespace std;
void reversearray(int p[],int k)
{
   int s,e;
   s= 0;
   e=k-1;
   while(s<=e)
   {
    swap(p[s],p[e]);
    s++;
    e--;
   } 
}
void printarray(int q[],int k)
{
   for(int i=0;i<k;i++)
   {
    cout<<q[i]<<" ";
   }
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    reversearray(data,n);
    printarray(data,n);
    return 0;
}