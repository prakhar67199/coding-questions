#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return f;
}
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int n1=n;
    int sum=0;
    while(n>0)
    {
      int num=n%10;
      sum=sum+fact(num);
      n=n/10;
    }
    if(sum==n1)
    {
        cout<<"given number is strong ";
    }
    else
    {
        cout<<"given number is not strong";
    }
}