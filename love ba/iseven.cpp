// no is even or odd
#include<iostream>
using namespace std;
bool iseven(int n1)
{
    if(n1%2==0)
    {
        return true ;
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the value: ";
    cin>>n;
    iseven(n);
    cout<<iseven(n);
    return 0;
}