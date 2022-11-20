//sum of all subarray
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int cr=0;
    for(int i=0;i<n;i++)
    {
        cr=0;
        for(int j=i;j<n;j++)
        {
            cr=cr+data[j];
            cout<<cr<<endl;
        }
    }
    return 0;
}