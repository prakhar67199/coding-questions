#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int sum=0,n1=n;
    while(n>0)
    {
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    if(n1%sum==0)
    {
        cout<<"given number is harshad ";
    }
    else
    {
        cout<<"given number is not harshad";
    }
}