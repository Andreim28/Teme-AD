#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long x,y;
    int n,k1=0,k2=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x>0)
            k1++;
        else
            k2++;
    }
    if(k1<=1||k2<=1)
        cout<<"Yes";
    else
        cout<<"No";
}
