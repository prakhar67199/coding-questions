#include<bits/stdc++.h>
using namespace std;
bool combo(string name1,string name2)
{
    sort(name1.begin(),name1.end());
    sort(name2.begin(),name2.end());
    int value1=name1.length();
    int value2=name2.length();
    if(value1!=value2)
    {
        return 0;
    }
    else
    {
        for(int i=0;i<value1;i++)
        {
            if(name1[i]!=name2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    string str1;
    cout<<"enter the string1 ";
    getline(cin,str1);
    string str2;
    cout<<"Enter the string2: ";
    getline(cin,str2);
    int value=combo(str1,str2);
    if(value)
    {
        cout<<"both string are anagram";
    }
    else
    {
        cout<<"both string are not anagram ";
    }
}