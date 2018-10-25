#include<iostream>
using namespace std;
int main()
{
    long long n,m,i,p=1;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        p=p*2;
        if(m<p)
            break;
    }
    cout<<m%p;
}
