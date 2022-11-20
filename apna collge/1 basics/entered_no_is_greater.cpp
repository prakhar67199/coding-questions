#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter the values";
    cin>>n1>>n2;
    if(n1==n2)
    {
        cout<<"both are equal";
    }
    else if(n1>n2)
    {
        cout<<"n1 is greater";
    }
    else
    {
        cout<<"n2 is greater";
    }
return 0;
}