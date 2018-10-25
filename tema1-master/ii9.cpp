/*Write a C program that computes the toll for a vehicle traveling on a toll highway. Your main method
will ask the user for the following input data:
- the classification of the vehicle (passenger car, small truck, or large truck) and
- if the vehicle is not a passenger car, the number of miles driven on the toll road
- if the vehicle is a large truck, the weight of the truck in tons.
You may assume that all input numerical data is of the proper form and will not contain negative values or
zero. Depending on the input data value(s), the program will calculate and display the amount of the toll
charge for using the highway.
Toll fees are calculated according to the following rules:
Classification Rate
Passenger Vehicle $2.25
Small Truck $3.00 + $0.40 for each mile
Large Truck $36.00 + $1.10 for each mile beyond 100 miles + $20.00 per ton for the first 5
tons + $25.00 per ton for any additional tons above 5 tons.
The vehicle classification will be entered as two letters ('PC' for Passenger car, 'ST' for Small truck, 'LT' for
Large Truck). All numerical measurements (miles and tons) are entered as integers.*/
#include<iostream>
using namespace std;
int main()
{
    char x[20];
    int dist,gr;
    float s=0;
    cout<<"Tip masina:";
    cin>>x;
    if(x[0]=='P'&&x[1]=='V')
    cout<<"$2.25";
    if(x[0]=='S'&&x[1]=='T')
    {
        cout<<"Distanta parcursa:";
        cin>>dist;
        s=3+0.40*dist;
        cout<<'$'<<s;
    }
    if(x[0]=='L'&&x[1]=='T')
    {
        s=0;
        cout<<"Distanta parcursa:";
        cin>>dist;
        cout<<"Greutate:";
        cin>>gr;
        if(dist>100)
            s=s+36+1.10*(dist-100);
        else
            s=36;
        if(gr<=5)
            s=s+20.00*gr;
        else
            s=s+25.00*gr-25;
        cout<<s;
    }
}
