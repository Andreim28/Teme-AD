//Implement bubble sort on a simple/double linked list.
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
    int n,i,x,j;
    int aux;
    cout<<"Nr de elemente:";
    cin>>n;
    simplyl *first,*last;
    first=NULL;
    for(i=1;i<=n;i++)
    {
        cout<<"Elementul:";
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
    simplyl *afis;
    afis=first;
    cout<<"Lista inainte de sortare:";
    while(afis!=NULL)
    {
        cout<<afis->info<<" ";
        afis=afis->next;
    }
    cout<<endl;
    afis=first;
    cout<<"Lista dupa sortare:";
    simplyl *jsort;
    for(i=1;i<n;i++){
        jsort=first->next;
        for(j=i+1;j<=n;j++){
        if(first->info>jsort->info)
            {
            aux=first->info;
            first->info=jsort->info;
            jsort->info=aux;
            }
        jsort=jsort->next;
        }
    first=first->next;
    }
    /*while(first->next!=NULL)
    {
        if(first->info>first->next->info)
        {
            aux=first->info;
            first->info=first->next->info;
            first->next->info=aux;
        }
        first=first->next;
    }*/
    while(afis!=NULL)
    {
        cout<<afis->info<<" ";
        afis=afis->next;
    }
}
