#include<iostream>
using namespace std;
int main()
{
    int n,x,i,k=0,kmin=100001,ok=0,imin;
    long long min=10000000001;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x<min){
            min=x;
            imin=i;
            kmin=100001;
        }
        else
        if(x==min)
        {
            if(i-imin<kmin)
                kmin=i-imin;
            imin=i;
        }
    }
    cout<<kmin;
}
