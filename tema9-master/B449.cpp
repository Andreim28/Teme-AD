#include<iostream>
using namespace std;
int main()
{
    long long k,p,i,x,y,s=0;
    cin>>k>>p;
    for(i=1;i<=k;i++)
    {
        x=i;
        y=i;
        while(y>0)
        {
            x=x*10+y%10;
            y=y/10;
        }
        s=s+x;
    }
    cout<<s%p;
}
