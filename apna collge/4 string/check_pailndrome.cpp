#include<iostream>
using namespace std;
bool istrue(char p[],int k)
{
    int s=0;
    int e=k-1;
    while(s<=e)
    {
        if(p[s]!=p[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
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
    int n,i;
    cout<<"enter the size of string: ";
    cin>>n;
    char arr[n];
    cout<<"enter the string : ";
    cin>>arr;
    int len =length(arr);
    cout<<istrue(arr,len)<<endl;
return 0;
}