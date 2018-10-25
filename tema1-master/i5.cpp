//Write a C program to perform math operations on two input whole numbers. The operations are:
//a) Compute square root of n1
//b) Compute square root of n2
//c) Raise n1 to the power of n2
//d) Inverse n1
//e) Inverse n2
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<sqrt(n1)<<endl;
    cout<<sqrt(n2)<<endl;
    int aux=n1;
    for(int i=1;i<n2;i++)
        aux=aux*n1;
    cout<<aux<<endl;
    aux=0;
    while(n1>0)
    {
        aux=aux*10+n1%10;
        n1=n1/10;
    }
    cout<<aux<<endl;
    aux=0;
    while(n2>0)
    {
        aux=aux*10+n2%10;
        n2=n2/10;
    }
    cout<<aux<<endl;

}