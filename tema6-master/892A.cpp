//http://codeforces.com/problemset/problem/892/A
#include<iostream>
using namespace std;
int main()
{
    int n, x, i;
    long long s=0,max1=-1,max2=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s+=x;
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>=max1)
        {
            max2=max1;//max2=10 max1=5
            max1=x;
        }
        if(x>max2&&x!=max1)
        {
            max2=x;
        }
    }
    if(s<=(max1+max2))
        cout<<"YES";
    else
        cout<<"NO";

}
