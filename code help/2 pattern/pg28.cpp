#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the length";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n||j==n||i+j==n+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}