#include<iostream>
using namespace std;
int main()
{
    int r1,r2,i,y;
    cout<<"enter the value of r1,r2";
    cin>>r1>>r2;
    for(i=r1;i<=r2;i++)
    {
        for(y=2;y<=i-1;y++)
        {
            if(i%y==0)
            {
                break;
            }
        }
        if(y==i)
    {
        cout<<"prime number is: "<<i<<endl;
    }
    }
    return 0;
}