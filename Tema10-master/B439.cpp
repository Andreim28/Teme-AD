#include<iostream>
using namespace std;
int main()
{
    long long a,b,i,p=1;
    cin>>a>>b;
    for(i=a+1;i<=b;i++)
    {
        p=p*(i%10);
        if(p%10==0)
            break;
    }
    cout<<p%10;
}
