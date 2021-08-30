#include "post.h"
#include <iostream>
using namespace std;

post::post()
{
    this->itype=0;
}
post::~post(){}
void post::set(string a,string b,string c,string d,int e,int f,double g)
{
    this->sid=a;
    this->sowner=b;
    this->sdate=c;
    this->scaption=d;
    this->ilike=e;
    this->iview=f;
    this->dcost=300;
}
void post::print()
{
    cout<<"ID: "<<this->sid<<endl;
    cout<<"Owner: "<<this->sowner<<endl;
    cout<<"Date: "<<this->sdate<<endl;
    cout<<"Likes: "<<this->ilike<<endl;
    cout<<"Views: "<<this->iview<<endl;
    cout<<"Cost: "<<this->dcost<<endl;
}
int post::view()
{
    return this->iview++;
}
double post::getcost()
{
    return 10*this->iview - this->dcost;
}
int post::getlike()
{
    return this->ilike;
}
int post::gettype()
{
    return this->itype;
}
