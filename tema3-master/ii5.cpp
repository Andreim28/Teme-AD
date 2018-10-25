//An = 1 + 3 + 9 + 27 + ... + 3n.
#include<iostream>
using namespace std;
int computeSum(int n)
{
int sum = 0;
int nextValue = 1;
for (int i = 0; i < n; i++) {
sum += nextValue;
nextValue *= 3;
}
return sum;
}
int main()
{
    cout<<computeSum(5);
}
