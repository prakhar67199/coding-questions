#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int reverse=0,lastdigit;
    while(n>0)
    {
        lastdigit = n%10;
        reverse= reverse*10 + lastdigit;
        n=n/10;
    }
    cout<<"your reversed number is: "<<reverse<<endl;
    return 0;
}