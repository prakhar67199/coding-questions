#include<iostream>
using namespace std;
void remo(string s)
{
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        if((s[i]!='(')&&(s[i]!=')'))
        {
            temp.push_back(s[i]);
        }
    }
    cout<<temp;
}
int main()
{
    string str;
    cout<<"enter the string ";
    getline(cin,str);
    remo(str);
}