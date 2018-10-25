//Write a program that, given an integer, determines if it is prime or not (if it is not prime, you do no need to print its factors).
#include<iostream>

using namespace std;

int main()
{
    int nr , i, ok=1;
    cout << "Numarul:";
    cin >> nr;
    for(i = 2 ; i <= nr/2 ; i++ )
    if(nr%i == 0){
        ok = 0;
        break;
        }
        if(ok == 0)
            cout << "Nu este prim";
        else
            cout << "Este prim";
}
