#include<iostream>
using namespace std;
void occurence(int p[],int n)
{
    int count;
    int visited[n]={0};
    for(int i=0;i<n;i++)
    {
        count=0;
        if(visited[i]==1)
        {
            continue;
        }
        for(int j=0;j<n;j++)
        {
            if(p[i]==p[j])
            {
                visited[j]=1;
                count++;
            }
        }
        cout<<"occurence of "<<p[i]<<" is "<<count<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    occurence(data,n);
}