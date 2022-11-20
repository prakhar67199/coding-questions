//table of any number using while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value: ";
    cin>>n;
    int i=1,value;
    while(i<=10)
    {
        value=n*i;
        cout<<"value is "<<value<<endl;
        i++;
    }
}
