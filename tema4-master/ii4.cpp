/*Write a complete program with one function called FindMinMax. This one function will return both
the minimum and the maximum values from an array of values. The FindMinMax function has three
arguments: array with 10 random numbers between 1 and 100 and two pointers: one pointer to min
value and one pointer to max value.*/
#include<iostream>
using namespace std;
void FindMinMax(int v[11],int &min,int &max)
{
    int i;
    min=101;max=0;
    for(i=1;i<=10;i++)
    {
        if(v[i]<min)
            min=v[i];
        if(v[i]>max)
            max=v[i];
    }
}
int main()
{
    int i,v[11],min,max;
    for(i=1;i<=10;i++)
        cin>>v[i];
    FindMinMax(v,min,max);
    cout<<"minim:"<<min<<endl;
    cout<<"maxim:"<<max;
}
