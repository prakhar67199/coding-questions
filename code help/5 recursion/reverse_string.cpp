#include<iostream>
using namespace std;
void reverse(string& str,int s,int e)
{
    // base case 
    if(s>e)
    {
        return;
    }
    //processing+recursion
    swap(str[s],str[e]);
    s++;
    e--;
    return reverse(str,s,e);
}
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    reverse(str,0,str.length()-1);
    cout<<str;
}