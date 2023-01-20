#include<iostream>
using namespace std;
int countstair(int num)
{
    if(num<0)
    {
        return 0;
    }
    if(num==0)
    {
        return 1;
    }
    return countstair(num-1)+countstair(num-2);
}
int main()
{
    int n;
    cout<<"enter the number of stairs: ";
    cin>>n;
    cout<<countstair(n);
}