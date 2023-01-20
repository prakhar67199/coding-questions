#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,10> a ={1,2,3,4,5,6,7,8,9,10};
    // how to find size of an array using stl
    int size=a.size();
    cout<<"size of an array is: "<<size<<endl;
    // how to find front element  of an array using stl
    cout<<"element on the front is: "<<a.front()<<endl;
     // how to find back element  of an array using stl
    cout<<"element on back is: "<<a.back()<<endl;
     // how to check given array is empty or not using stl
    cout<<"is array is empty: "<<a.empty()<<endl;
     // how to find certain index element of an array using stl
    cout<<"elemnt at index 2 is :"<<a.at(2)<<endl;
}