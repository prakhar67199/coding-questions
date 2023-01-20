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
        if(str[i]==' ')
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

// method 2
#include<iostream>
using namespace std;
void remo(string name)
{
    int count=0;
    for(int i=0;name[i];i++)
    {
        if(name[i]!=' ')
        {
            name[count]=name[i];
            count++;
        }
    }
    name[count]='\0';
    cout<<name<<endl;
}
int main()
{
    string str;
    cout<<"enter the string : ";
    getline(cin,str);
    remo(str);
}