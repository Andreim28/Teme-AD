//http://codeforces.com/problemset/problem/894/A
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[101];
    int sum=0,k=0,i,c=0;
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='Q')
        {
            k++;
            sum=sum+c;
        }
        if(s[i]=='A')
        {
            c=c+k;
        }
    }
    cout<<sum;
}
