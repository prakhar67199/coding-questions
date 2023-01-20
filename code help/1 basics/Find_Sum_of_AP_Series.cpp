#include<iostream>
using namespace std;
int main()
{
    int n,a,d;
    cout<<"enter the value of number,first term,difference: ";
    cin>>n>>a>>d;
    int ans=(n/2)*(2*a+(n-1)*d);
    cout<<ans;
}
//method 2
// #include<iostream>
// using namespace std;
// int ap(int a,int n,int d)
// {
//     int sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         sum=a+sum;
//         a=a+d;
//     }
//     return sum;
// }
// int main()
// {
//     int n,a,d;
//     cout<<"enter the value of number,first term,difference: ";
//     cin>>n>>a>>d;
//    int ans=ap(a,n,d);
//    cout<<"sum of ap series is : "<<ans<<endl;
// }