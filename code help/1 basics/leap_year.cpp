#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the year: ";
    cin>>n;
    if((n%4==0)&&(n%100!=0)||(n%400==0))
    {
        cout<<"given year is leap year";
    }
    else
    {
        cout<<"year is not leap year";
    }
}   