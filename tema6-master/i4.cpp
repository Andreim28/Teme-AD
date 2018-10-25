//Write the function strend(s,t), which returns 1 if the string t occurs at the end of the string s, and zero
//otherwise.
#include<iostream>
#include<string.h>
using namespace std;
int strend(char s[],char t[])
{
    int k=0,y=strlen(t),l=strlen(s),x=strlen(t);
    while((s[l-1]==t[x-1])&&strlen(s)>0&&strlen(t)>0)
    {
        k++;
        l--;
        x--;
    }
    if(k==y)
        return 1;
    else
        return 0;
}
int main()
{
    cout<<strend("focccar","cccccccccar");
}
