#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[52];
    int k=0,i;
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(strchr("aeiou",s[i])!=0||strchr("13579",s[i])!=0)
            k++;
    }
    cout<<k;
}
