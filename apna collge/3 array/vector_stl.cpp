#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    vector<int>a(6,2);
    vector<int>last(a);
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"copied element: ";
for(int i:last)
    {
        cout<<i<<" ";
    }
    cout<<endl;
//     cout<<"capacity of vector is: "<<v.capacity()<<endl;
//     cout<<"size of vector is: "<<v.size()<<endl;
//     v.push_back(11); //storing the value in vector
//     cout<<"capacity of vector is: "<<v.capacity()<<endl;
//     cout<<"size of vector is: "<<v.size()<<endl;
//     v.push_back(21);
//     cout<<"capacity of vector is: "<<v.capacity()<<endl;
//     cout<<"size of vector is: "<<v.size()<<endl;
//     v.push_back(31);
//      cout<<"capacity of vector is: "<<v.capacity()<<endl; 
//      //it shows the capacity of vector
//     cout<<"size of vector is: "<<v.size()<<endl;
//     //it shows total element in vector
//     cout<<"element at index 2nd is: "<<v.at(2)<<endl;
//     cout<<"front element in vector is: "<<v.front()<<endl;
//     cout<<"last element in vector is: "<<v.back()<<endl;
//     cout<<"before pop: ";
//     for(int i:v)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     v.pop_back();
//     cout<<"after pop: ";
//     for(int i:v)
//     {
//         cout<<i<<" ";
//     }
//      cout<<endl;
//     cout<<"before clear"<<v.size()<<endl;
//     v.clear();
//     cout<<"after clear: "<<v.size()<<endl;
   return 0;
 }