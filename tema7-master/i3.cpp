//Write a pointer version of the function strcat. strcat(s,t) copies the string t to the end of s.
#include<iostream>
using namespace std;

void mystrcat(char s[],char t[])
{
    while(*s!='\0')
        s++;
    while(*t!='\0')
    {
        *s=*t;
        t++;
        s++;
    }
    *s='\0';
}
int main()
{
    char s[100],t[100];
    cin>>s>>t;
    mystrcat(s,t);
    cout<<s;
}
