//It is given a text which contains words separated by the characters: “,”, “.”, “;”. Write a program that
//displays in an alphabetical order the words that contain at least three vowels.
#include<iostream>
#include<string.h>

using namespace std;
char a[10][256];
int main()
{
    char s[256],*p,aux[256];
    int i,k=0,z=0,j;
    cin>>s;
    p=strtok(s,".,;");
    while(p)
    {
        k=0;
        for(i=0;i<strlen(p);i++)
            if(strchr("aeiou",p[i])!=0)
            k++;
        if(k>=3)
           {
            for(i=0;i<strlen(p);i++)
            a[z][i]=p[i];
            z++;}
        p=strtok(NULL,".,;");
    }
    for(i=0;i<z-1;i++)
        for(j=i+1;j<z;j++)
        if(strcmp(a[i],a[j])>0)
    {
        strcpy(aux,a[i]);
        strcpy(a[i],a[j]);
        strcpy(a[j],aux);
    }
    for(i=0;i<z;i++)
        cout<<a[i]<<endl;
    return 0;
}
