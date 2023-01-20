#include<iostream>
using namespace std;
bool istrue(int n)
{
    if(n>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    if(istrue(n))
    {
        cout<<n<<" is positive ";
    }
    else
    {
        cout<<n<<" is negative";
    }
    return 0;
}