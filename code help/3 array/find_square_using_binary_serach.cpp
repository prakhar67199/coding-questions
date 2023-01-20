#include<iostream>
using namespace std;
int square(int n)
{
    int s=0,e=n;
    int ans=-1;
    while(s<=e)
    {
        long long int mid=s+(e-s)/2;
        long long int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        else if(square>n)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=square(n);
    cout<<ans;
}