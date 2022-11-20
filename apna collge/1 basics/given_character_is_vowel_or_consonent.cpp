#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        cout<<"entered character is vowel";
        break;
        case 'e':
        cout<<"entered character is vowel";
        break;
        case 'i':
        cout<<"entered character is vowel";
        break;
        case 'o':
        cout<<"entered character is vowel";
        break;
        case 'u':
        cout<<"entered character is vowel";
        break;
        default :
        cout<<"entered character is consonent";
        break;
    }
    return 0;
}