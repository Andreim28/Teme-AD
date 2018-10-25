//Write a C program that reads your first and last names and than converts them to upper-case and lower-case letters.
//The results will be printed to standard output console.
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char c1[20],c2[20];
    int i;
    cin>>c1;
    cin>>c2;
    for(i=0;i<strlen(c1);i++)
        if(c1[i]>='a'&&c1[i]<='z')
            c1[i]=c1[i]-32;
        else
            if(c1[i]>='A'&&c1[i]<='Z')
                c1[i]=c1[i]+32;
    for(i=0;i<strlen(c2);i++)
        if(c2[i]>='a'&&c2[i]<='z')
            c2[i]=c2[i]-32;
        else
            if(c2[i]>='A'&&c2[i]<='Z')
                c2[i]=c2[i]+32;
        cout<<c1<<" "<<c2;
}
