//Write a program that asks for two sides of a triangle and then calculates the hypotenuse. Use two
//“hypotenuse” functions to do the calculation: one which calls the attributes by value and returns the
//result and one that obtains the result as a parameter called by reference..
#include<iostream>
using namespace std;
int hypotenuse(int x,int y)
{
    return x*x+y*y;
}
void hypotenuse(int x,int y,int &hyp)
{
    hyp=x*x+y*y;
}
int main()
{
    int x;
    cout<<hypotenuse(3,4)<<endl;
    hypotenuse(4,5,x);
    cout<<x;
}
