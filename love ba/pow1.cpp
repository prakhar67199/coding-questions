#include<iostream>
using namespace std;
int power(int n1,int n2)
{
    int a=1;
    for(int i=1;i<=n2;i++)
    {
        a = a*n1;
    }
    return a;

}
int main()
{
    int a,b;
    cout<<"enter the value of a,b: ";
    cin>>a>>b;
    power(a,b);
    int ans = power(a,b);
    cout<<"answer is "<<ans<<endl;
}