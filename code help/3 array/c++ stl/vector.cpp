#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    // how to define vector with given size
    // vector<int> a(5,1);
    // how to insert element in vector
    v.push_back(2);
    // how to define vector size(no of elements in vector)
    cout<<"Size of an vector is :"<<v.size()<<endl;
// how to define vector capacity(no of memory locations in vector)
    cout<<"capacity of vector is :"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size of an vectore is: "<<v.size()<<endl;
    cout<<"capacity of vecote is: "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"size of an vectore is: "<<v.size()<<endl;
    cout<<"capacity of vecote is: "<<v.capacity()<<endl;
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    cout<<"size of an vectore is: "<<v.size()<<endl;
    cout<<"capacity of vecote is: "<<v.capacity()<<endl;
    cout<<"front element is "<<v.front()<<endl;
    cout<<"back element is: "<<v.back()<<endl;
    cout<<"elemnt at index location 2 is: "<<v.at(2)<<endl;
    cout<<"is vector is empty: "<<v.empty()<<endl;
    // befoer deletion
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    // after deletion
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"hello "<<endl;
    // how to copy the vector
    vector<int> love(v);
    cout<<"size of an vecore is "<<love.size()<<endl;
    cout<<"capacity of an vector is "<<love.capacity()<<endl;
    // befor clear
    cout<<"size of an vecore is "<<v.size()<<endl;
    cout<<"capacity of an vector is "<<v.capacity()<<endl;
    v.clear();
    // after clear
    cout<<"size of an vector is : "<<v.size()<<endl;
    cout<<"capacity of an vector is: "<<v.capacity()<<endl;
}