//http://codeforces.com/contest/884/problem/B
#include<iostream>
using namespace std;
int main()
{
    int n,x,a[100001],s=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    if(s+(n-1)==x)
        cout<<"YES";
    else
        cout<<"NO";
}
