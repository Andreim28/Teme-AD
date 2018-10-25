//Write a program that finds the minimum number of bills and coins necessary to return a given amount of money 
//(Note: there are available 1c, 5c, 20c, 50c coins and 1$, 5%, 10$, 20$, 50$, 100$ bills).
#include<iostream>

using namespace std;

int main()
{
    int k=0;
    float suma;
    cout << "Suma:";cin >> suma;
    suma = suma * 100;
    while(suma >= 10000){
        suma = suma-10000;
        k++;
        }
    while(suma >= 5000){
        suma = suma-5000;
        k++;
        }
    while(suma >= 2000){
        suma = suma-2000;
        k++;
        }
    while(suma >= 1000){
        suma = suma-1000;
        k++;
        }
    while(suma >= 500){
        suma = suma-500;
        k++;
        }
    while(suma >= 100){
        suma = suma-100;
        k++;
        }
    while(suma >= 50){
        suma = suma-50;
        k++;
        }
    while(suma >= 20){
        suma = suma-20;
        k++;
        }
    while(suma >= 5){
        suma = suma-5;
        k++;
        }
    while(suma >= 1){
        suma = suma-1;
        k++;
        }
    cout << "Numarul minim de bacnote:" << k;
}
