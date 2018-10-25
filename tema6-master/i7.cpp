//Write the function void minmax(int a[], int *min, int *max) that puts the minimum value of the array into
//the variable pointed to by min and the maximum value into the variable pointed to by max.
#include<iostream>
using namespace std;
int *MIN, *MAX;
void minmax(int a[],int *MIN, int *MAX)
{
    MIN=&a[0];
    MAX=&a[0];
    int i;
    for(i=0;i<10;i++)
        {
        if(a[i]<*MIN)
            MIN=&a[i];
        if(a[i]>*MIN)
            MAX=&a[i];
        }
    cout<<*MIN<<" "<<*MAX;
}
int main()
{
    int a[15];
    for(int i=0;i<10;i++)
        cin>>a[i];
    minmax(a,MIN,MAX);
}
