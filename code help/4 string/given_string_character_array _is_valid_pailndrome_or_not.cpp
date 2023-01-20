// // Online C++ compiler to run C++ program online
// #include<iostream>
// using namespace std;
// bool valid(char ch)
// {
//    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
//    {
//     return 1;
//    } 
//    return 0;
// }
// char lower(char ch)
// {
//    if(ch>='a'&&ch<='z')
//    {
//     return ch;
//    }
//    else
//    {
//          char temp =ch-'A'+'a';
//          return temp;  
//     }
//     if(ch>='0'&&ch<='9')
//     {
//         char temp= ch-'0';
//         return temp;
//     }
// }
// bool istrue(string a)
// {
//     int s=0;
//     int e=a.length()-1;
//     while(s<=e)
//     {
//         if(a[s]!=a[e])
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// bool pailndrome(string s)
// {
//     //removal of character
//     string temp="";
//     for(int j=0;j<s.length();j++)
//     {
//         if(valid(s[j]))
//         {
//             temp.push_back(s[j]);
//         }
//     }
//     //conversion
//     for(int j=0;j<temp.length();j++)
//     {
//         temp[j]=lower(temp[j]);
//     }
//     //check pailndrome
//     return istrue(temp);
// }
// int main()
// {
//     string str;
//     cout<<"enter the name: ";
//     cin>>str;
//    cout<<"your string is: "<<pailndrome(str)<<endl;
//     return 0;
// }


//  method 2
#include<iostream>
#include<string>
using namespace std;
bool ispail(string p)
{
    // removal of character
    string temp="";
    for(int i=0;i<p.length();i++)
    {
        if(isvalid(p[i]))
        {
            temp.push_back(p[i]);
        }
    }
    //conversion
    for(int j=0;j<temp.length();j++)
    {
        temp[j]=ilower(p[j]);
    }
    //check for pailndrome
    return istrue(temp);
    
}
bool isvalid(char ch)
{
   if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
   {
    return 1;
   } 
   return 0;
}
char ilower(char ch)
{
   if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
   {
    return ch;
   }
   else
   {
         char temp =ch-'A'+'a';
         return temp;  
    }
}
bool istrue(string a)
{
    int s=0;
    int e=a.length()-1;
    while(s<=e)
    {
        if(a[s]!=a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    string str;
    cout<<"enter the string: ";
    cin>>str;
    cout<<ispail(str)<<endl;
}