/*Write a C code fragment that uses a do-while loop to ask the user to input an integer between 0 and 90
(for an angle) and repeat if the user enters an integer out of this range until the user finally enters a
valid angle. If the user enters an invalid number, you should print an error message as well.*/
#include<iostream>
using namespace std;
int main()
{
    int x;
    do{
        cout<<"x=";cin>>x;
        if(x<0||x>90)
            cout<<"Numarul dvs. nu se afla intre 0 si 90"<<endl;
        else
            cout<<"Numarul dvs. a fost bun";
    }while(x<0||x>90);
}
