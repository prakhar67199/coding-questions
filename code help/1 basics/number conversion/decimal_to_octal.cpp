#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int octal=n%8;
        ans=(octal*pow(10,i))+ans;
        n=n/8;
        i++;
    }
    cout<<"your number in octal will be: "<<ans<<endl;
    return 0;
}