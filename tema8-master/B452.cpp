#include<iostream>
using namespace std;
int v[36]={31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int n,x,i,ok,p,a[25],ok29=0;;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==29)
            ok29++;
        if(x==28)
            x+=1;
        a[i]=x;
    }
    for(i=0;i<36;i++)
    {
        if(v[i]==a[1])
        {
            ok=1;
            p=i;
            for(int j=2;j<=n;j++)
            {
                if(v[++p]!=a[j])
                    ok=0;
            }
            if(ok==1&&ok29<=1){
                cout<<"Yes";
                break;
            }
        }
    }
    if(ok==0||ok29>1)
        cout<<"No";
}
