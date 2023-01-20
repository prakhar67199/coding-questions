#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    int min=INT_MAX;
    int max=INT_MIN;
    cout<<"enter the number: ";
    cin>>n;
    while(n>0)
    {
        int digit=n%10;
        if(digit<min)
        {
            min=digit;
        }
        if(digit>max)
        {
            max=digit;
        }
        n=n/10;
    }
    cout<<"min is "<<min<<" "<<"max is "<<max<<endl;
}