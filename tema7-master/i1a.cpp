//Implement a function to copy one string into another in two ways:
//a) char *strcpy_array( char dest[], char src[] ) - function returns a pointer as its value
#include<iostream>
#include<string.h>
using namespace std;
char strcpy_array( char dest[],char src[])
{
    int i;
    for(i=0;i<strlen(src);i++)
        dest[i]=src[i];
    dest[i]='\0';
    for(i=0;i<strlen(src);i++)
        cout<<dest[i];
}
int main()
{
    char dest[100],src[100];
    cin>>dest>>src;
    strcpy_array(dest,src);
}
