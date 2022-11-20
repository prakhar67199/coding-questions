#include<iostream>
using namespace std;
int main()
{
    int n,f=1,x;
    cout<<"enter the number: ";
    cin>>n;
    x=n;
    if(n<0)
    {
        cout<<"negative no factorial is not possible";
    }
    else if(n==0)
    {
        cout<<"your answer will be 1";
    }
    else
    {
    while(n>=1)
    {
       f=f*n;
       n--;
    }
    cout<<"factorial of " <<x<<" is "<<f<<endl;
    }
    return 0;
}