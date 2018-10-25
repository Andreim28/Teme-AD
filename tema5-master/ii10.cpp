/*Write a function named displayVertical that displays three strings vertically instead of horizontally.
For example, CAT, BISON, DOG will be displayed as:
C B D
A I O
T S G
  O
  N    */
#include<iostream>
#include<string.h>

using namespace std;
char a[256][4];
void displayVertical(char s1[256],char s2[256],char s3[256])
{
    int i,j;
    for(i=0;i<strlen(s1);i++)
    a[i][0]=s1[i];
    for(i=0;i<strlen(s2);i++)
    a[i][1]=s2[i];
    for(i=0;i<strlen(s3);i++)
    a[i][2]=s3[i];
    int max=0;
    if(strlen(s1)>max)
        max=strlen(s1);
    if(strlen(s2)>max)
        max=strlen(s2);
    if(strlen(s3)>max)
        max=strlen(s3);
    for(i=0;i<max;i++){
        for(j=0;j<3;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;}
}
int main()
{
    char s1[256],s2[256],s3[256];
    cin>>s1;cin>>s2;cin>>s3;
    displayVertical(s1,s2,s3);
}
