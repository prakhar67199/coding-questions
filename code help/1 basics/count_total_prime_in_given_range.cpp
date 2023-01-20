#include<bits/stdc++.h>
using namespace std;
bool isprime(int num)
{
    int i;
    if(num<=1)
    {
        return 0;
    }
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    if(i==num)
    {
        return 1;
    }
}
int main()
{
    int n;
    cout<<"enter the maximum range: ";
    cin>>n;
    int cnt=0;
    for(int i=2;i<n;i++)
    {
        if(isprime(i))
        {
            cnt++;
        }
    }
    cout<<"count of prime number is: "<<cnt;
}