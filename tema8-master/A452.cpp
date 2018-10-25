#include<iostream>
using namespace std;
int main()
{
    int n,t=0,o=0;
    cin>>n;
    int v[n];
    for(int i=1;i<=n;i++)
       {
           cin>>v[i];
           if(v[i]==2)
                t++;
           else
                o++;
       }
    if(o==0)
    {
        cout<<"0";
        return 0;
    }
    int k=min(o,t);
    cout<<k+(o-k)/3;
}
