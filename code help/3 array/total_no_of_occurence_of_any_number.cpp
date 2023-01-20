#include<bits/stdc++.h>
using namespace std;
int loccur(int p[],int n,int key)
{
    int s=0,e=n-1;
    int mid,ans=INT_MIN;
    while(s<=e)
    {
        mid=s+(e-s)/2;
         if(key==p[mid])
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>p[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
int foccur(int p[],int n,int key)
{
    int s=0,e=n-1;
    int ans=INT_MIN;
    int mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(key==p[mid])
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>p[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n,key;
    cout<<"Enter the size of an array and key value: ";
    cin>>n>>key;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    int ans1=foccur(data,n,key);
    int ans2=loccur(data,n,key);
    int final=ans2-ans1+1;
    cout<<"no of occurence is : "<<final<<endl;
}
//  method number 2(using linear serch)
// #include<iostream>
// using namespace std;
// int count(int p[],int n,int k)
// {
//     int j=0,count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(p[i]==k)
//         {
//             j=i;
//             while(p[j]==p[i])
//             {
//                 count++;
//                 j++;
//             }
//             break;
//         }
//     }
//     cout<<count;
// }
// int main()
// {
//     int n,key;
//     cout<<"enter the size of an array and key value : ";
//     cin>>n>>key;
//     int data[n];
//     cout<<"Enter the array element: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>data[i];
//     }
//     count(data,n,key);
// }