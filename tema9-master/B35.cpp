#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int i,x;
    for(i=1;i<=min(a,b);i++){
        if((a/i+b/i)>=n)
            x=i;
        else
            break;}
    cout<<x;
}
