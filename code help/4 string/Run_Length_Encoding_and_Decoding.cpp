#include<bits/stdc++.h>
using namespace std;
char maxoccur(string str)
{
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        int count=1;
        while(i<n-1 && str[i]==str[i+1])
        {
            count++;
            i++;
        }
        cout<<str[i]<<count;
    }
}
int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<maxoccur(str);
}
