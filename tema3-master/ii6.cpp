//S = 1 + 4 + 9 + 16 + ... + n2
#include<iostream>
using namespace std;
int computeSum(int n)
{
int sum = 0;
int nextValue = 1;
for (int i = 0; i < n; i++) {
sum += nextValue * nextValue;
nextValue += 1;
}
return sum;
}
int main()
{
    cout<<computeSum(5);
}
