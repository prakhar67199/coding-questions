#include<iostream>
using namespace std;
int main()
{
    int i,j,k,row,column;
    cout<<"enter the value of row and column: ";
    cin>>row>>column;
    for(i=1;i<=row;i++)
    {
        k=1;
        for(j=1;j<=column;j++)
        {
            if(j>=6-i&&j<=4+i&&k)
            {
                cout<<"*";
                k=0;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<"\n";
    }
    return 0;
}
