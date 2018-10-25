//http://codeforces.com/contest/877/problem/A
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char sir[101],*p;
    cin >> sir;
    int k=0;
    if(strstr(sir , "Danil") != 0)
        k++;
    if(strstr(sir , "Olya") != 0)
        k++;
    if(strstr(sir , "Slava") != 0)
        k++;
    if(strstr(sir , "Ann") != 0)
        k++;
    if(strstr(sir , "Nikita") != 0)
        k++;
    if(k==1)
        cout << "YES";
    else
        cout << "NO";
}
