#include<iostream>
#include<climits>
using namespace std;
char maxoccur(string s)
{
    int ch[26]={0};
    
    for(int i=0;i<s.length();i++)
    {
        char ele=s[i];
        int number=0;
        if(ele>='a'&&ele<='z')
        {
        number=ele-'a';
        ch[number]++;
        }
        else
        {
            number=ele -'A';
            ch[number]++;
        }
    }
    // find index of maximum character
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(ch[i]>maxi)
        {
            maxi=ch[i];
            ans=i;
        }
    }
    // returning maxoccuring character
    return 'a'+ans;
}
int main()
{
    string str;
    cout<<"enter the string: ";
    cin>>str;
    cout<<maxoccur(str);
}