#include<iostream>
using namespace std;
int main()
{
    int min,max;
    cout<<"enter the min,max number :";
    cin>>min>>max;
    int sum=0;
    for(int i=min;i<=max;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of digit of number is: "<<sum;
}