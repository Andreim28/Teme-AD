#include<iostream>
#include<stdlib.h>
using namespace std;

struct simplyl
{
    int info;
    simplyl* next;
};
struct doublel
{
    int info;
    simplyl *next,*prev;
};
int main(){
    int n,i,x;
    cin>>n;
    simplyl *first,*last;
    first=NULL;
    for(i=1;i<n;i++)
    {
        cin>>x;
        simplyl* p=(simplyl*)malloc(sizeof(simplyl));
        p->info=x;
        p->next=NULL;
        if(first==NULL){
            first=p;
            last=p;
        }
        else
        {
            last->next=p;
            last=p;
        }
    }
    while(first!=NULL)
    {
        cout<<first->info;
        first=first->next;
    }
}
