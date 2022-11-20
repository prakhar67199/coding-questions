#include<iostream>
using namespace std;
int ls(int p[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
      if(k== p[i])
      {
        return i;
      }
    }
    return -1;
}
int main()
{
    int n,key;
    cout<<"enter the size of array and key value: ";
    cin>>n>>key;
    int data[n];
    cout<<"enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<ls(data,n,key)<<endl;
    return 0;
}