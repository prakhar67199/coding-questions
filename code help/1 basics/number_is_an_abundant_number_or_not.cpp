#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>n)
    {
        cout<<"given number is abundant number";
    }
    else
    {
        cout<<"given number is not abundant number";
    }
}
