//Write a program that, given a string, determines the number of words in the string. You can assume
//that the space character ' ' is the only possible separator between words.
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
	int k = 1,i,x;
	char s[100],*p;
	cout<<"Sirul:";
	cin.get(s,100);
	cout<<"Solutia(1/2):";cin>>x;
	if(x==1)
	{
        for(i=0;i<strlen(s);i++)
            if(s[i]==' ')
                k++;
    cout<<"Nr de cuvinte:"<<k;
	}
	if(x==2)
    {
        p=strtok(s," ");
        while(p)
            {
            k++;
            p=strtok(NULL," ");
            }
    cout<<"Nr de cuvinte:"<<k-1;
    }

}
