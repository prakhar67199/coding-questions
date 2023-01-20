#include<bits/stdc++.h>
using namespace std;
void cou(string str)
{
    sort(str.begin(),str.end());
    char ch =str[0];
    int count=1;
    for(int i=1;i<str.length();i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
        else
        {
            cout<<ch<<count<<" ";
            count=1;
            ch=str[i];
        }
    }
     cout<<ch<<count<<" ";
}
int main()
{
    string str;
    cout<<"enter the string: ";
    getline(cin,str);
    cou(str);
}