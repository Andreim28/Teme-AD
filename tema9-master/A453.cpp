#include<iostream>
using namespace std;
int fr[101];
int main()
{
    int n,m,i,j,x,y;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x==0)
            fr[0]++;
        for(j=x+1;j<=y;j++)
            fr[j]++;
    }
    int ok=1;
    for(i=0;i<=m;i++)
        if(fr[i]==0)
            ok=0;
    if(ok==1)
        cout<<"YES";
    else
        cout<<"NO";
}
