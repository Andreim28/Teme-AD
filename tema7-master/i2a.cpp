//a) int strlen_array( char array[] )
#include<iostream>
using namespace std;
int strlen_array(char array[])
{
    int i,length;
    i=0;length=0;
    while(array[i]!='\0')
    {
        length++;
        i++;
    }
    cout<<length;
}
int main()
{
    char s[100];
    cin>>s;
    strlen_array(s);
}

