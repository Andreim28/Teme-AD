//http://codeforces.com/contest/873/problem/A
#include<iostream>
using namespace std;
int main()
{
    int n,k,x,s=0,y,i;
    cin>>n>>k>>x;
    for(i=0;i<n-k;i++){
        cin>>y;
        s=s+y;
    }
    s=s+k*x;
    cout<<s;
}
