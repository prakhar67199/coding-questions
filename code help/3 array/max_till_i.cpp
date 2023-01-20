//max till i 
#include<iostream>
#include<climits>
#include<math.h>
#include<cmath>
using namespace std;
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
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx= max(mx,data[i]);
        cout<<"max till "<<i<<"is "<<mx<<endl;
    }
}