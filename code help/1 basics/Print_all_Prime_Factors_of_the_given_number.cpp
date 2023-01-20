#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=2;n>1;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" "<<endl;
            n=n/i;
        }
    }
}