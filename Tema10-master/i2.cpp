//Implement binary search on an array of integers.
#include<iostream>
using namespace std;
int main()
{
    int v[100],i,n,l,r,ok,x,mid;
    cin>>n;
    cin>>x;
    for(i=1;i<=n;i++)
        cin>>v[i];
    l=1;
    r=n;
    mid=n/2;
    ok=0;
    while(l<=r&&!ok)
    {
        if(x==v[mid]){
            cout<<x<<" se afla la pozitia "<<mid;
            ok=1;}
        else
            if(x>v[mid])
            {
                l=l+1;
                mid=(l+r)/2;
            }
            else
            {
                r=r-1;
                mid=(l+r)/2;
            }
    }
    if(ok==0)
        cout<<x<<" nu se afla in vector";
}
