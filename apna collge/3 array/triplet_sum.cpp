#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cout<<"enter the value of size of arrray and sum: ";
    cin>>n>>s;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {

                if(data[i]+data[j]+data[k]==s)
                {
                cout<<data[i]<<" "<<data[j]<<" " <<data[k]<<endl;
                }
            }
        }
    } 
return 0;
}