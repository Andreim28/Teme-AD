//3) Write a recursive function power(base, exponent) that when invoked returns base^exponent.
#include<iostream>

using namespace std;

int power(int base , int exponent)
{
        if( exponent != 0 )
            return base * power( base , exponent-1 );
        else
            return 1;
}
int main()
{
    cout<< power( 2 , 4 );
}
