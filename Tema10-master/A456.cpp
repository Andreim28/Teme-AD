#include<iostream>
using namespace std;
int main()
{
    long long a,b,x,y,z,yel=0,blue=0;
    cin>>a>>b;
    cin>>x>>y>>z;
    yel=yel+x*2;
    yel=yel+y;
    blue=blue+y;
    blue=blue+z*3;
    if(a<yel&&b<blue)
        cout<<(yel-a)+(blue-b);
    else
        if(a<yel&&b>=blue)
            cout<<yel-a;
        else
            if(a>=yel&&b<blue)
                cout<<blue-b;
            else
                cout<<0;

}
