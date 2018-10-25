//Write a C program to perform basic math operations on two input whole numbers.
//The basic operations are addition, subtraction, multiplication, integer division, real division, and modulus (%).
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"Addition:"<<x+y<<endl;
    cout<<"Subtraction:"<<x-y<<endl;
    cout<<"Multiplication:"<<x*y<<endl;
    cout<<"Integer division:"<<x/y<<endl;
    cout<<"Real division:"<<(float)x/y<<endl;
    cout<<"Modulus"<<x%y;
}
