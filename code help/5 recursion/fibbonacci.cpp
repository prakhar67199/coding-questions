#include<iostream>
using namespace std;
int fib(int num)
{
    if(num<=1)
    {
        return num;
    }
    else
    {
        return fib(num-1)+fib(num-2);
    }
}
int main()
{
    int n;
    cout<<"enter the fibbonacci term: ";
    cin>>n;
    cout<<fib(n);
}