#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number in octal: ";
    cin>>n;
    int ans=0,ans1=0,i=0,j=0;
    while(n!=0)
    {
        int decimal=n%10;
        ans=ans+(decima*pow(8,i));
        i++;
        n=n/10;
    }
    while(ans!=0)
    {
        int binary=ans%2;
        ans1=ans1+(binary*pow(10,i));
        ans=ans/2;
        i++;
    }
    cout<<"your answer in binary will be: "<<Ans1<<endl;
}