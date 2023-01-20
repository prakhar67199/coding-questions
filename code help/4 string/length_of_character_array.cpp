#include<iostream>
using namespace std;
int length(char p[])
{
    int count =0;
    for(int i=0;p[i]!='\0';i++)
    {
       count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"enter the size of an character array: ";
    cin>>n;
    char name[n];
    cout<<"enter the name: ";
    cin>>name;
    cout<<"length of name is"<<length(name)<<endl;
    return 0;
}