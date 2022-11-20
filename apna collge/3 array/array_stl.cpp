#include <iostream>
#include<array>
using namespace std;
int main() {
    array<int,5>a={1,2,3,4,5};
    for(int i=0;i<a.size();i++)
    {
        cout<<"array elements are: "<<a[i]<<endl;
    }
    cout<<"size of array is: "<<a.size()<<endl; //to count total no of element in array
    cout<<"element at 2nd index: "<<a.at(2)<<endl; //find element at ith index
    cout<<"element at 1st positon is: "<<a.front()<<endl; //return integer at front index 
    cout<<"element at last position is: "<<a.back()<<endl;//return integer at last index 
    cout<<"given array is empty or not: "<<a.empty()<<endl; // return boolean value about given array is empty or not
    return 0;
}