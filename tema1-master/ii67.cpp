//Write a program that will count from 1 to 12 and print the count and its square, for each count.
//Write a program that will count from 1 to 100 and print only those values between 32 and 39, one to a line.
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=12;i++){
        cout<<i<<" "<<i*i<<endl;
    }
    for(i=32;i<=39;i++)
        cout<<i<<endl;
}
