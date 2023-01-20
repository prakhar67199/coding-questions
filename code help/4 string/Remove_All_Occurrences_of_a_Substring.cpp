#include<iostream>
using namespace std;
void removie(string s1,string s2)
{
    while(s1.length()!=0&& s1.find(s2)<s1.length())
    {
        s1.erase(s1.find(s2),s2.length());
    }
    cout<<s1;
}
int main()
{
    string s1,s2;
    cout<<"enter the the string and part of string: ";
    cin>>s1>>s2;
    removie(s1,s2);
}