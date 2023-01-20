#include<iostream>
using namespace std;
void removestr(string s)
{
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    cout<<temp;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    removestr(s);
}