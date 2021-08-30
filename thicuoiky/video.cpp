#include "video.h"
#include <iostream>
using namespace std;

video::video()
{
    this->itype=2;
}
video::~video(){}
void video::set(string a,string b,string c,string d,int e,int f,double g)
{
    post::set(a,b,c,d,e,f,g);
    cout<<"Input source: ";cin.ignore();getline(cin,this->ssource);
    cout<<"Input time: ";cin>>this->itime;
    this->dcost=10*this->itime;
}
void video::print()
{
    cout<<"\tDang phat video\n";
    post::print();
    cout<<"Source: "<<this->ssource<<endl;
    cout<<"Time: "<<this->itime<<endl;
}
double video::getcost()
{
    return 10*this->iview - this->dcost;
}