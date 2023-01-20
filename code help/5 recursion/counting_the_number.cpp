#include<iostream>
using namespace std;
void count(int num)
{
    if(num==0)
    {
        return ;
    }
    else
    {
        cout<<num<<" ";
        count(--num);
    }
}
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    count(n);
}