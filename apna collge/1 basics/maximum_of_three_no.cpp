#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the 1st,2nd,3rd value \n";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greater and value of a is"<<a<<endl;
        }
        else
        {
            cout<<"c is greater and value of c is"<<c<<endl;
        }
    }
    else if(b>c)
    {
        cout<<"b is greater and value of b is"<<b<<endl;
    }
    else
    {
        cout<<"c is greater and value of c is"<<c<<endl;
    }
    return 0;
}