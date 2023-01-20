#include<iostream>
using namespace std;
// method 1
// void sort(int a[],int n)
// {
//     int last=n-1;
//     // sort 0 and place in left side
//     for(int i=0,j=0;j<n;j++)
//     {
//         if(a[j]==0)
//         {
//             swap(a[j],a[i]);
//             i++;
//         }
//     }
//     // sort 2 and place in most right side
//     for(int i=last,j=last;j>=0;j--)
//     {
//         if(a[j]==2)
//         {
//             swap(a[j],a[i]);
//             i--;
//         }
//     }
    
// }
// void print(int p[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<p[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter the size of an array: ";
//     cin>>n;
//     int data[n];
//     cout<<"enter the array element: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>data[i];
//     }
//     sort(data,n);
//     print(data,n);
//     return 0;
// }
//        method 2
void sort(int a[],int n)
{
    int end =n-1;
    for(int i=0,j=0,k=end;j<=k;j++)
    {
        if(a[j]==0)
        {
            swap(a[j],a[i]);
            i++;
        }
        else if(a[j]==2)
        {
            swap(a[j--],a[k]);
            k--;
        }
    }

}
void print(int p[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int data[n];
    cout<<"enter the array element: ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    sort(data,n);
    print(data,n);
    return 0;
}