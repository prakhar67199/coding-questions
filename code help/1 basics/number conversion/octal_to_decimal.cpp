#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number in octal: ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int decimal=n%10;
        ans=ans+(decimal*pow(8,i));
        n=n/10;
        i++;
    }
    cout<<"your number in decimal will be: "<<ans<<endl;
}