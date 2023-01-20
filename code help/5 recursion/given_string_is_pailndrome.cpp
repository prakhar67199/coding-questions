#include<iostream>
using namespace std;
bool pail(string& str,int s,int e)
{
    //base case
    if(s>e)
    {
        return 1 ;
    }
    if(str[s]!=str[e])
    {
        return 0;
    }
    else
    {
        return pail(str,s+1,e-1);
    }
}
int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    bool ans= pail(str,0,str.length()-1);
    if(ans)
    {
        cout<<"given string is pailndrome ";
    }
    else
    {
        cout<<"given string is not pailndrome ";
    }
}