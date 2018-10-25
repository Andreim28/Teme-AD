//Write a program that computes the solutions of a 2-nd degree equation aX^2 + b^X + c =0. 
//The a, b, c coefficients are real numbers and are known.
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c,delta;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    delta = b * b - 4 * a * c;
    if(delta==0)
        cout<<"Solutia unica:"<<-b/(2*a);
    if(delta>0){
        cout<<"x1="<<(-b+sqrt(delta))/(2*a)<<endl;;
        cout<<"x2="<<(-b-sqrt(delta))/(2*a);
    }


}
