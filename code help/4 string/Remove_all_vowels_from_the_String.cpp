#include<iostream>
using namespace std;
void remo(string str)
{
    string temp="";
    for(int i=0;i<str.length();i++)
    {
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<str.length();i=i+1)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')|(str[i]=='o')||(str[i]=='u'))
        {
            temp.push_back(str[i+1]);
            i++;
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
   cout<<temp;
}
int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    remo(str);
}