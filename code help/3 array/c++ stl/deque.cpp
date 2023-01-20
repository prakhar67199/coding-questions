#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    d.push_front(11);
    d.push_front(12);
    d.push_front(13);
    d.push_front(14);
    d.push_front(15);
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    d.pop_back();
    d.pop_front();
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"element at index 2 is: "<<d.at(2)<<endl;
    cout<<"element at front is: "<<d.front()<<endl;
    cout<<"eleemnt at end is: "<<d.back()<<endl;
    cout<<"is deque is empty: "<<d.empty()<<endl;
    cout<<"before erase size is: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size is: "<<d.size()<<endl;
    cout<<"before clear size is: "<<d.size()<<endl;
    d.clear();
    cout<<"size of deque after clear: "<<d.size()<<endl;
}