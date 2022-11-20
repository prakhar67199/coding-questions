#include<iostream>
using namespace std;
int main()
{
    int i,j,row,column;
    cout<<"enter the value of row and column: ";
    cin>>row>>column;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=column;j++)
        {
            if(j>=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}