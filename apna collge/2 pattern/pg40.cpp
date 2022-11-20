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
            if(j>=i)
            {
                cout<<k;
                k++;
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