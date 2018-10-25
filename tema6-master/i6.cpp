/*Write a function which takes a time measured in the number of seconds since midnight, and breaks it up
into the number of hours (0-23), minutes (0-59), and seconds (0-59). Example output:
total_sec: 12345 ==> 3 hr(s) 25 min(s) 45 sec(s)
void split_time(long int total_sec, int *hr, int *min, int *sec){}*/
#include<iostream>
using namespace std;
void split_time(long int total_sec, int *hr, int *min, int *sec)
{
    int hour=0,second=0,minute=0;
    while(total_sec>3600)
    {
        hour++;
        total_sec-=3600;
    }
    while(total_sec>60)
    {
        minute++;
        total_sec-=60;
    }
    second=total_sec;
    hr=&hour;
    min=&minute;
    sec=&second;
    cout<<*hr<<" hr(s) "<<*min<<" min(s) "<<*sec<<" sec(s)";
}
int main()
{
    int *hr,*min,*sec;
    split_time(12345,hr,min,sec);
}
