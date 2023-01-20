//compleement of any number
#include<iostream>
using namespace std;
int main()
{
    int n,mask=0;
    int m=n;
    cout<<"enter the value: ";
    cin>>n;
    if(n==0)
    {
        return 1;
    }
    else
    {
        while(m!=0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int fa = (~n) & mask;
        cout<<"final answer is: "<<fa<<endl;
    }
}