// Remove characters(number,special character,space) from a string except alphabets
#include<iostream>
using namespace std;
void remo(string name)
{
    string ans;
    for(int i=0;i<name.length();i++)
    {
        int ascii=(int)name[i];
        if((ascii>=65&&ascii<=90)||(ascii >= 97 && ascii <= 122))
        {
            ans.push_back(name[i]);
        }
    }
    cout<<ans;
}
int main()
{
    string str;
    cout<<"Enter the string ";
    getline(cin,str);
    remo(str);
}