#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,r,a;
    cout<<"enter the value of 1st term,common ratio,number of term: ";
    cin>>a>>r>>n;
    int ans=a*(pow(r,n)-1)/(r-1);
    cout<<ans;
}
// method 2
// #include<iostream>
// #include <math.h>
// using namespace std;
// int gp(int a,int r,int num)
// {
//     int sum=0;
//     for(int i=1;i<=num;i++)
//     {
//         sum=sum+a;
//         a=a*r;
//     }
//     return sum;
// }
// int main()
// {
//     int n,r,a;
//     cout<<"enter the value of 1st term,common ratio,number of term: ";
//     cin>>a>>r>>n;
//     int ans=gp(a,r,n);
//     cout<<"answer is: "<<ans;
// }