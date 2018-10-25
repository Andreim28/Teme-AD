//https://csacademy.com/contest/archive/task/plants
#include <iostream>

using namespace std;

int main() {
    int N,M,t[101],a[101],b[101],k,j,i;
   cin>>N>>M;
   for(i=0;i<M;i++)
   cin>>t[i];
   for(i=0;i<N;i++)
   cin>>a[i]>>b[i];
   for(i=0;i<N;i++)
   {
       k=0;
       for(j=0;j<M;j++)
       if(t[j]>=a[i]&&t[j]<=b[i])
       k++;
       cout<<k<<endl;
   }
}
