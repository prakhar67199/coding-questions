#include <iostream>
#include<deque>
using namespace std;
int main() {
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(6);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    d.pop_front();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"element at index 2 is: "<<d.at(2)<<" "<<endl;
    cout<<"given deque are empty or not: "<<d.empty()<<" "<<endl;
    cout<<"size of deque before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"size of deque after erase: "<<d.size()<<endl;
     for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}