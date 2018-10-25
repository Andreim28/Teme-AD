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
            }
        k++;
    }
}
