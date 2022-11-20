#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter your number";
    cin>>n;
    int n1=n;
    int ld,sum=0;
    while(n>0)
    {
        ld = n%10;
        sum=sum+ld*ld*ld;
        n=n/10;
    }
    if(sum == n1)
    {
        cout<<"entered number is armstrog number";
    }
    else
    {
        cout<<"entered number is not aremstrong number";
    }
    return 0;
}