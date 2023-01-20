#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
bool istrue(int a,int b,int c)
{
    int p,q,r;
    p= max(a, max(b,c));
    if(p == a)
    {
        q=b;
        r=c;
    }
    else if(p == b)
    {
        q=a;
        r=c;
    }
    else
    {
        q=a;
        r=b;
    }
    if(p*p == q*q + r*r)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x,y,z;
    cout<<"enter the value of x,y,z: ";
    cin>>x>>y>>z;
    if(istrue(x,y,z))
    {
        cout<<"no are pythagorian triplet";
    }
    else
    {
        cout<<"no are not pythagorian triplet";
    }
    return 0;
}