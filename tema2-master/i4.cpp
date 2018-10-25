//There are given the grades obtained by students.
//Write a program that determines if all students passed the exam or not. 
//Calculate the percentage of students that obtained grades smaller than 8.
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin("i4.in");
    float nota,ok=1,k=0,nr=0;
    while(fin >> nota)
    {
        nr++;
        if( nota < 5)
            ok=0;
        if( nota < 8)
            k++;
    }
    if( ok == 0 )
        cout << "NU" << endl;
    else
        cout << "DA" << endl;
    cout << "Procentajul elevilor cu media mai mica decat 8:" << (float)(k/nr)*100;
}
