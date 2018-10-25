//Determine the largest (max) and the smallest (min) element from a sequence. 
//The number of elements n and the elements Ai are read from the standard input into the same variable.
#include<iostream>

using namespace std;

int main()
{
    int nOfElem,x,i,min=1000000,max=-1000000;
    cout << "Numarul de elemente:";
    cin >> nOfElem;
    for(i=1 ; i<=nOfElem ; i++)
    {
        cout << "Numarul:";
        cin >> x;
        if(x < min)
            min = x;
        if(x > max)
            max = x;
    }
    cout << "Minimul:"<< min << endl;
    cout << "Maximul:"<< max;
}
