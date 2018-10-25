//Write a function find_largest that takes an int *a and the number of integers stored at the memory
//address a. Iterate using pointer arithmetic only and return the largest value.
//int find_largest(int *a, int n){}
#include<iostream>

using namespace std;

int find_largest(int *a,int n)
{
     int *p=&a[0];
    for(int i=1 ; i<n ;i++)
    {
        if(*(a+i)>*p)
            *p=*(a+i);
    }
    return *p;
}
int main()
{
    int n;
    int b[100];
    cin>>n;

    for(int i = 0 ; i < n ; i++)
        cin>>b[i];

    cout<<find_largest(b,n);

}
