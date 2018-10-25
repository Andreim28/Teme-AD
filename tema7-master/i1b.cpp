//b) char *strcpy_pointer( char *dest, char *src ) -
#include<iostream>
#include<string.h>
using namespace std;
char strcpy_pointer(char *dest,char *src)
{
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}
int main()
{
    char dest[100],src[100];
    cin>>dest>>src;
    strcpy_pointer(dest,src);
    cout<<dest;
}
