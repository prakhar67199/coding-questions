#include<iostream>
#include<math.h>
using namespace std;
int replace(int num)
{
    int i=0,ans=0;
    if(num==0)
    {
        return 1;
    }
    while(num>0)
    {
        int digit=num%10;
        if(digit==0)
        {
            digit=1;
        }
        ans=(digit*pow(10,i))+ans;
        num=num/10;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<replace(n);
}