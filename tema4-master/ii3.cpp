/*Write a program that asks the user for the high and low temperatures for each day in the month of
January. Ask the user to enter all of the temperatures.
a. Store these temperatures in a two-dimensional array.
b. Pass the array to a function that calculates and returns the average high and low temperatures
for the month.
c. Pass the array to another function that finds and returns the highest and lowest temperatures
for the month.
d. Print out the average high and average low temperatures and the maximum and minimum
temperature.*/
#include<iostream>
using namespace std;
void average(int a[32][3],int &avgmax,int &avgmin)
{
    int i,k=0,sum=0;
    for(i=1;i<=31;i++){
        sum=sum+a[i][1];
        k++;
        }
    avgmax=sum/k;
    k=0;sum=0;
    for(i=1;i<=31;i++)
    {
        sum=sum+a[i][2];
        k++;
    }
    avgmin=sum/k;
}
void maxmin(int a[32][3],int &min,int &max)
{
    int i,j;
    min=10000000000;
    max=-10000000000;
    for(i=1;i<=31;i++)
        for(j=1;j<=2;j++){
            if(a[i][j]<min)
                min=a[i][j];
            if(a[i][j]>max)
                max=a[i][j];}
}
int main()
{
    int i,j,a[32][3],x,y;
    for(i=1;i<=31;i++)
        for(j=1;j<=2;j++)
            cin>>a[i][j];
    average(a,x,y);
    cout<<"Avg max temp:"<<x<<endl;
    cout<<"Avg min temp:"<<y<<endl;
    maxmin(a,x,y);
    cout<<"Max temp:"<<y<<endl;
    cout<<"Min temp:"<<x<<endl;
}
