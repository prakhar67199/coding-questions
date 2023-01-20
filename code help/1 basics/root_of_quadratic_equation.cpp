#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    float x,y;
    cout<<"enter the value of cofficient of x^2,x.cofficient term";
    cin>>a>>b>>c;
    int d=b*b-4*a*c;
    if(d<0)
    {
        cout<<"both root are imaginary";
    }
    else if(d>0)
    {
        cout<<"root are distinct ";
        x=(-b+sqrt(abs(d)))/(2*a);
        y=(-b-sqrt(abs(d)))/(2*a);
        cout<<x<<" "<<y<<endl;
    }
    else
    {
        cout<<"roots re equal";
        x=-b/(2.0*a);
        cout<<x<<endl;
    }
}