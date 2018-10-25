//Write a program that generates the first n elements of the sequence of numbers:
//1,1,2,1,2,3,1,2,3,4,… obtained from the sequence of natural numbers: 1,2,3,4,… by replacing the number k
//with the sequence: 1,2,…,k.
#include<iostream>

using namespace std;

int main()
{
    int i=1,j,n,k=1;
    cout<<"Numarul de elemente : ";cin>>n;
    while(i<=n)
    {
        for(j=1;j<=k;j++)
            {
            cout<<j<<" ";
            i++;
            if(i>n)
                break;
            }
        k++;
    }
}
