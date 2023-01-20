#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the value";
    cin>>n;
    while(n>=0)
    {
        sum = sum + n;
        cout<<"enter the number";
        cin>>n;
    }
    cout<<"sum will be="<<sum<<endl;
    return 0;
}