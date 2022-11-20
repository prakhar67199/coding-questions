#include<iostream>
using namespace std;
int main()
{
    int n,a=-1,b=1,c,i;
    cout<<"enter the number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}