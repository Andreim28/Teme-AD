//Interclasarea a 2 vectori
#include<iostream>
using namespace std;
int main()
{
    int v1[20],v2[20],v3[20],n,m,i,j,k,l;
    cout<<"Nr elem v1:"<<endl;cin>>n;
    cout<<"Nr elem v2:"<<endl;cin>>m;
    for(i=1;i<=n;i++)
        cin>>v1[i];
    for(j=1;j<=m;j++)
        cin>>v2[j];
    k=0;i=1;j=1;
    while(i<=n && j<=m){
        if(v1[i]<v2[j])
        {
            k++;
            v3[k]=v1[i];
            i++;
        }
        else
        {
            k++;
            v3[k]=v2[j];
            j++;
        }
    }
    if(i<=n)
        for(l=i;l<=n;l++)
    {
        k++;
        v3[k]=v1[l];
    }
    if(j<=m)
        for(l=j;l<=m;l++)
    {
        k++;
        v3[k]=v2[l];
    }
    for(i=1;i<=k;i++)
        cout<<v3[i]<<" ";
}
