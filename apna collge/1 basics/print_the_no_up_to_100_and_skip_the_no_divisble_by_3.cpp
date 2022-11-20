//print the no up to 100 and skip the no divisble by 3
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        if(i>=50)
        {
            break;
        }
        cout<<"value is ="<<i<<endl;
    }
    return 0;
}