#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int num=n;
    int rev=0;
    while(n>0)
    {
        int digit = n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(num==rev)
    {
        cout<<"number is pailndrome";
    }
    else
    {
        cout<<"number is not pailndrome";
    }
    return 0;
}