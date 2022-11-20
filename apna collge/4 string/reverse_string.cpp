#include<iostream>
using namespace std;
void revar(char q[],int l)
{
    int s=0;
    int e=l-1;
    while(s<e)
    {
        swap(q[s++],q[e--]);
    }

}
int len(char p[])
{
    int count=0;
    for(int i=0;p[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"enter the array length: ";
    cin>>n;
    char name[n];
    cout<<"enter the name: ";
    cin>>name;
    int k=len(name);
    cout<<"your array length is: "<<k<<endl;
    revar(name,k);
    cout<<"reversed array is: ";
    cout<<name<<" ";
    return 0;
}
