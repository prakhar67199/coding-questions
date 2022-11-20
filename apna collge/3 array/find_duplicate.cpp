#include<iostream>
using namespace std;
int main()
{
    int n,ans = 0 ;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    for(int i=0;i<n;i++)
    {
        ans =ans^data[i];
    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    cout<<"answer is: "<<ans<<endl;
    return 0;
}
