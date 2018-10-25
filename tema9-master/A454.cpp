#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d>=b||d>2*c||c>2*d)
        cout<<"-1";
    else
        cout<<2*a<<endl<<2*b<<endl<<max(c,d);
}
