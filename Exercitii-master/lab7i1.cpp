#include<iostream>
#include <stdlib.h>
using namespace std;
struct library{
    char name[20];
    int year;
};
int main()
{
    int i,n;
    cin>>n;
    library *p;
    p=(library*)malloc(n*(sizeof(library)));
    for(i=0;i<n;i++){
        cin>>p[i].name;
        cin>>p[i].year;
    }
    for(i=0;i<n;i++)
    {
        cout<<(p+i)->name<<" "<<(p+i)->year<<'\n';
    }
}
