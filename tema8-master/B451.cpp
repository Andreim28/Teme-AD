#include<iostream>
using namespace std;
int main()
{
    /*long long n,a,b;
    int k1=0,k2=0,aux;
    cin>>n>>a>>b;
    while(n>=a&&n!=b)
    {
        n=n-a;
        k1++;
    }
    while(n>=b&&n!=0)
    {
        n=n-b;
        k2++;
    }
    if(n==0){
        cout<<"YES"<<endl;
        cout<<k1<<" "<<k2;
    }
    else
        cout<<"NO";*/
        long long n,a,b,c;
        cin>>n>>a>>b;
        for(int i=0;i<=n;i++)
        {
            c=n-a*i;
            if(c%b==0&&c>=0)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<c/b;
                return 0;
            }
        }
        cout<<"NO"<<endl;
        return 0;
}
