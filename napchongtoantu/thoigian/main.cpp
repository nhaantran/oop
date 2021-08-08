#include "time.h"
#include <iostream>
using namespace std;

int main()
{
    Time d,e;
    int hour,min,sec;
    cout<<"\tInput hour - min - sec for time d:\n";
    cout<<"Hour: ";cin>>hour;
    cout<<"Minute: ";cin>>min;
    cout<<"Seconde: ";cin>>sec;
    d.sethour(hour);
    d.setminute(min);
    d.setsecond(sec);
    cout<<"Time d: ";d.print();
    cout<<"\tInput hour - min - sec for time e:\n";
    cout<<"Hour: ";cin>>hour;
    cout<<"Minute: ";cin>>min;
    cout<<"Seconde: ";cin>>sec;
    e.sethour(hour);
    e.setminute(min);
    e.setsecond(sec);
    cout<<"Time e: ";e.print();
    Time sum=d+e;
    Time difference=d-e;
    cout<<"d+e = ";sum.print();
    cout<<"d-e = ";difference.print();
    d.print();
    e.print();
    if(d>e)
        cout<<"Time d > Time e\n";
    else if(d<e)
        cout<<"Time d < Time e\n";
    else if(d==e)
        cout<<"Time d = Time e\n";
    Time a,b;
    cout<<"\tInput time a:\n";
    cin>>a;
    cout<<"\tInput time b:\n";
    cin>> b;
    a=++a;cout<<a;
    b=--b;cout<<b;
    return 0;
}