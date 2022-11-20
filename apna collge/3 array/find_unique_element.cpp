#include<iostream>
using namespace std;
int findunique(int data[],int k)
{
    int ans =0;
    for(int i=0;i<k;i++)
    {
        ans= ans^data[i];
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter the size of an element : ";
    cin>>n;
    int m = (2*n) + 1 ;  
    int data[m];
    cout<<"enter the array element: ";
    for(int i =0;i<m;i++)
    {
       cin>>data[i];
    }
    cout<<"unique element is : "<<findunique(data,m)<<endl;
    return 0;
}