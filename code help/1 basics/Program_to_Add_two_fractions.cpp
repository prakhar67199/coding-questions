#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else
    {
        while(a!=b)
        {
            if(a>b)
            {
                a=a-b;
            }
            if(b>a)
            {
                b=b-a;
            }
        }
        return a;
    }
}
void simple(int &num3,int &den3)
{
    int g=gcd(num3,den3);
    num3=num3/g;
    den3=den3/g;
}
int main()
{
    int num1,num2,den1,den2;
    int num3,den3;
    cout<<"enter the value of num1,num2,den1,den2: ";
    cin>>num1>>den1>>num2>>den2;
    int lcm = (den1*den2)/gcd(den1,den2);
    cout<<lcm<<endl;
    den3=lcm;
    num3=num1*(den3/den1)+num2*(den3/den2);
    simple(num3,den3);
    cout<<"answer is: "<<num3<<"/"<<den3;
}