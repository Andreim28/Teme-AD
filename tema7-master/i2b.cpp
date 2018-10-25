//int strlen_pointer( char *strp )
#include<iostream>
using namespace std;
int strlen_pointer(char *strp)
{
    int length=0;
    while(*strp!='\0')
    {
        strp++;
        length++;
    }
    cout<<length;
}
int main()
{
    char s[100];
    cin>>s;
    strlen_pointer(s);
}
