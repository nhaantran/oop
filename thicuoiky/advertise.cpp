#include "advertise.h"
#include <iostream>
using namespace std;

advertise::advertise()
{
    this->itype=3;
    this->dcost=10*this->itime;
}
advertise::~advertise(){}
void advertise::set(string a,string b,string c,string d,int e,int f,double g)
{
    post::set(a,b,c,d,e,f,g);
    cout<<"Input source: ";cin.ignore();getline(cin,this->ssource);
    cout<<"Input time: ";cin>>this->itime;
    cout<<"Input customer cost: ";cin>>this->icuscost;
}
void advertise::print()
{
    post::print();
    cout<<"Source: "<<this->ssource<<endl;
    cout<<"Time: "<<this->itime<<endl;
    cout<<"Customer cost: "<<this->icuscost<<endl;
}
double advertise::getcost()
{
    return this->icuscost-this->dcost;
}