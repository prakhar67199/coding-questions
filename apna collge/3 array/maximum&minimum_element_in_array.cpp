#include<iostream>
using namespace std;
int main()
{
    int n , i , maxno , minno;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the element for array: ";
    for(i=0;i<n;i++)
    {
        
        cin>>data[i];
    }
    maxno = data[0];
    for(i=0;i<n;i++)
    {
        if(maxno < data[i])
        {
            maxno=data[i];
        }
    }
    minno = data[0];
    for(i=0;i<n;i++)
    {
        if(minno > data[i])
        {
            minno=data[i];
        }
    }
    cout<<"maximum element is "<<maxno<<endl;
    cout<<"minmum element is "<<minno<<endl;
    return 0;
}