#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    char op;
    cout<<"enter the two numbers";
    cin>>n1>>n2;
    cout<<"enter the operator ";
    cin>>op;
    switch(op)
    {
        case '+' :
           n3=n2+n1;
           cout<<"answer will be"<<n3;
           break;
           case '-' :
           n3=n2-n1;
           cout<<"answer will be"<<n3;
           break;
           case '*' :
           n3=n2*n1;
           cout<<"answer will be"<<n3;
           break;
           case '/' :
           n3=n2/n1;
           cout<<"answer will be"<<n3;
           break;
           default :
           cout<<"entered wrong operator";
           break;

    }
    return 0;
}