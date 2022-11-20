#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int num)
{
    int y;
    for(y=2;y<=sqrt(num);y++)
    {
        if(num%y==0)
        {
            return false;
        }
    }
    if(num==y)
    {
    return true;
    }
}

int main()
{
    int a,b;
    cout<<"enter the min and max range: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            cout<<i<<"\n"<<endl;
        }
    }
    return 0;
}
