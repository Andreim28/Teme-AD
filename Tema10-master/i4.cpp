//Implement bubble sort on an array of integers.
#include<iostream>
using namespace std;
int main()
{
    int v[25],n,i,j,aux;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(v[i]>v[j])
    {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
    }
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
}
