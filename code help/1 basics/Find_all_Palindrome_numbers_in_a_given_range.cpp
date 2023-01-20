#include<iostream>
using namespace std;
bool istrue(int n)
{
    int rev=0;
    int temp=n;
    while(n>0)
    {
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(temp==rev)
    {
        return true;
    }
        return false;
    
}
int main()
{
    int min,max;
    cout<<"enter the range of min max value: ";
    cin>>min>>max;
    for(int i=min;i<=max;i++)
    {
        if(istrue(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}