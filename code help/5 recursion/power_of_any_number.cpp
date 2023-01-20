#include<iostream>
using namespace std;
int power(int num,int p)
{  
    int small=0,big=0;
    if(p==0)
    {
        return 1;
    }
    else
    {
       small=power(num,p-1);
       big=num*small;
       return big;
    }
}
int main()
{
    int n,p;
    cout<<"enter the number and power: ";
    cin>>n>>p;
    int ans=power(n,p);
    cout<<"final answer will be: "<<ans<<endl;
}