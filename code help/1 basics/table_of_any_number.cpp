#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    if(n==0)
    {
        cout<<"answer is "<<0<<endl;
    }
    else if(n>0)
    {
        for(int i=1;i<=10;i++)
        {
            cout<< n <<"*"<< i <<"="<< n*i <<endl;
        }
    }
    else
    {
        cout<<"you entered negative no";
    }
    return 0;
}