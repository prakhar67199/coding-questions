//reverse the number 
#include<iostream>
#include<climits>
using namespace std; 
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int ld;
    int rev=0;
    while(n>0)
    {
      ld = n%10;
      if((rev> INT_MAX/10 )||(rev< INT_MIN /10))
      {
        return 0;
      }
      rev = (rev*10)+ld;
      n=n/10;
    }
    cout<<"reverse no is : "<<rev<<endl;
    return 0;
}