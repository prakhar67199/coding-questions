#include<iostream>
using namespace std;
void captial(string name)
{
    int last=name.length();
    for(int i=0;i<last;i++)
    {
        if(i==0||i==(last-1)&&(int)name[i]>=97)
        {
            name[i]=(char)((int)name[i]-32);
        }
        else if(name[i]==' ')
        {
            if(((int)name[i-1]-32)>=65)
            {
                name[i-1]=(char)((int)name[i-1]-32);
            }
            if(((int)name[i+1]-32)>=65)
            {
                name[i+1]=(char)((int)name[i+1]-32);
            }
        }
    }
    cout<<name;
}
int main()
{
    string str;
    cout<<"enter the string "; 
    getline(cin,str);
    captial(str);
}
