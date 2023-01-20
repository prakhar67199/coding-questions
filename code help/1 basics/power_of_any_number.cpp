#include<iostream>
using namespace std;
int main()
{
    int n,power;
    cout<<"enter the number and their power: ";
    cin>>n>>power;
    int ans=1;
    for(int i=1;i<=power;i++)
    {
        ans= n*ans;
    }
    cout<<"power of given number is: "<<ans;
}
