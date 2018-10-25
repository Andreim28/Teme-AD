#include<iostream>
using namespace std;
int v[4];
int main()
{
    cin>>v[0]>>v[1]>>v[2];
    int i,j,aux;
    for(i=0;i<2;i++)
        for(j=i+1;j<3;j++)
        if(v[i]>v[j])
    {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
    }
    if(v[0]==1){
        cout<<"YES";
        return 0;
    }
    if(v[0]==2&&v[1]==2)
    {
        cout<<"YES";
        return 0;
    }
    if(v[0]==3&&v[1]==3&&v[2]==3)
    {
        cout<<"YES";
        return 0;
    }
    if(v[0]==2&&v[1]==4&&v[2]==4)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
