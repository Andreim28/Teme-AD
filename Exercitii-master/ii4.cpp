#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    char s[256];
    int k=1,max=1,imax,i;
    for(i=1;i<strlen(s);i++){
        if(s[i]==s[i-1]+1)
            k++;
        else{
            if(k>max)
        {
            max=k;
            imax=i;
        }
        k=0;}
    }
    for(i=s+imax-max;i<s+imax;i++)
        cout<<s[i];
}
