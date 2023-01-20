#include<iostream>
using namespace std;
void rev(string name)
{
    int s=0;
    int e=name.length()-1;
    while(s<e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<name;
}
int main()
{
    string str;
    cout<<"enter the string: ";
    getline(cin,str);
    rev(str);
}