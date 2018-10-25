//http://codeforces.com/contest/884/problem/A
#include<iostream>
using namespace std;
int main()
{
    int n,t,a[100],i,k=0;
    cin>>n>>t;
    for(i=1;i<=n;i++)
        cin>>a[i];
        for(i=1;i<=n&&t>0;i++)
        {
            t=t-(86400-a[i]);
            k++;
        }
    cout<<k;

}
