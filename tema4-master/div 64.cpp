//http://codeforces.com/contest/887/problem/A
#include<iostream>
#include<string.h>
using namespace std;

int main()

{
    char s[200];

    cin>>s;

    int k=0,ok=0;

    for(int i=strlen(s)-1 ; i >= 0 ; i--)
    {
         if(s[i]=='0')
            k++;
          if(k>=6 && s[i]=='1')
            ok=1;

    }

    if(ok)

        cout<<"yes";
    else
        cout<<"no";
        return 0;
}
