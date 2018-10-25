//a. Write a program that prints 2, 4, 6, 8, … 60. Use a “for” loop.
//b. Same, but use a “while” loop.
//c. Same, but use a “do-while” loop.
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=2;i<=60;i=i+2)
        cout<<i<<" ";
        cout<<endl;
    i=2;
    while(i<=60)
    {
        cout<<i<<" ";
        i=i+2;
    }
    cout<<endl;
    i=2;
    do{
        cout<<i<<" ";
        i=i+2;
    }while(i<=60);
}
