#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int ans=0;
    int i=0;
    cout<<"enter the number: ";
    cin>>n;
    while(n)
    {
        int bit = n & 1;
        ans = ( bit * pow(10,i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout<<"your binary number will be: "<<ans<<endl;
    return 0;
}
