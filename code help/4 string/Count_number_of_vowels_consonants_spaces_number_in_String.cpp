#include<iostream>
using namespace std;
void counti(string str)
{
    int vowel=0;
    int consonenet=0;
    int spaces=0;
    int number=0;
    for(int i=0;i<str.length();i++)
    {
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<str.length();i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            vowel++;
        }
        else if(str[i]>'a'&&str[i]<'z')
        {
            consonenet++;
        }
        else if(str[i]==' ')
        {
            spaces++;
        }
        else
        {
            number++;
        }
    }
    cout<<"total number of vowels are: "<<vowel<<endl;
    cout<<"total number of consonenets are: "<< consonenet<<endl;
    cout<<"total number of spaces are: "<<spaces<<endl;
    cout<<"total number of digits are: "<<number<<endl;
}
int main()
{
    string str;
    cout<<"enter the string: ";
    getline(cin,str);
    counti(str);
}