#include<bits/stdc++.h>
using namespace std;
void seive(int num)
{
    bool data[num+1];
    memset(data,true,sizeof(data));
    for(int p=2;p*p<=num;p++)
    {
        if(data[p]==true)
        {
            for (int i = p * p; i <= num; i += p)
                data[i] = false;
        }
    }
    for (int p = 2; p <= num; p++)
        if (data[p])
            cout << p << " ";
}
int main()
{
    int n;
    cout<<"enter the maximum range: ";
    cin>>n;
    seive(n);
    return 0;
}