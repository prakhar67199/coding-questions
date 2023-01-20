#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int n1=pow(n,2);
    int n2=n%10,n3=n1%10;
    if(n2==n3)
    {
        cout<<"given number is automorphic";
    }
    else
    {
        cout<<"given number is not automorphic";
    }
}