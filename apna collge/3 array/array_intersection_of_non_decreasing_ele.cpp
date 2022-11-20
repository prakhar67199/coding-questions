#include<iostream>
using namespace std;
int main()
// {
//     int n,m,ans=0;
//     cout<<"enter the size of an array: ";
//     cin>>n;
//     int data1[n];
//     cout<<"enter the array element: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>data1[i];
//     }
//     cout<<"enter the size of an array: ";
//     cin>>m;
//     int data2[m];
//     cout<<"enter the array element: ";
//     for(int j=0;j<m;j++)
//     {
//         cin>>data2[j];
//     }
//     for(int i=0;i<n;i++)
//     {
//         int ele=data1[i];
//         for(int j=0;j<m;j++)
//         {
//             if(ele==data2[j])
//             {
//                ans= ele;
//                data2[j]=INT_MIN;
//                break;

//             }
//         }
          
//     }
//     cout<<"intersection of array is: "<<ans<<endl;
// }
            // more optimied-1 
// {
//     int n,m,ans=0;
//     cout<<"enter the size of an array: ";
//     cin>>n;
//     int data1[n];
//     cout<<"enter the array element: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>data1[i];
//     }
//     cout<<"enter the size of an array: ";
//     cin>>m;
//     int data2[m];
//     cout<<"enter the array element: ";
//     for(int j=0;j<m;j++)
//     {
//         cin>>data2[j];
//     }
//     for(int i=0;i<n;i++)
//     {
//         int ele=data1[i];
//         for(int j=0;j<m;j++)
//         {
//             if(ele<data2[j])
//             {
//                 break; // more optimized
//             }
//             if(ele==data2[j])
//             {
//                ans= ele;
//                data2[j]=-56;
//                break;

//             }
//         }
          
//     }
//     cout<<"intersection of array is: "<<ans<<endl;
// }
            //    more optimized-2
{
   int n,m,ans=0,i,j;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data1[n];
    cout<<"enter the array element: ";
    for(i=0;i<n;i++)
    {
        cin>>data1[i];
    }
    cout<<"enter the size of an array: ";
    cin>>m;
    int data2[m];
    cout<<"enter the array element: ";
    for(j=0;j<m;j++)
    {
        cin>>data2[j];
    } 
    while(i<n&&j<m)
    {
        if(data1[i]<data2[j])
        {
            i++;

        }
        else if(data1[i]==data2[j])
        {
          ans=data1[i];
          i++;
          j++;
        }
        else
        {
           j++;
        }
    }
    cout<<"answer is : "<<ans<<endl;
}