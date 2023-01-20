#include<iostream>
using namespace std;
int fact(int num)
{
    int small=0,big=0;
    if(num<0)
    {
        cout<<"you entered wrong value"<<endl;
        return 0;
    }
    if(num==1||num==0)
    {
        return 1;
    }
    else
    {
        small=fact(num-1);
        big=num*small;
        return big;
    }
}
int main()
{
    int n;
    cout<<"ente the value: ";
    cin>>n;
    int ans=fact(n);
    cout<<"answer will be :"<<ans<<endl;
}