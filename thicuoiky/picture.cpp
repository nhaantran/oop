#include "picture.h"
#include <iostream>
using namespace std;

picture::picture()
{
    this->itype=1;
}
picture::~picture(){}
void picture::set(string a,string b,string c,string d,int e,int f,double g)
{
    post::set(a,b,c,d,e,f,g);
    cout<<"Input source: ";cin.ignore();getline(cin,this->ssource);
    this->dcost=450;
}
void picture::print()
{
    post::print();
    cout<<"Source: "<<this->ssource<<endl;
}
double picture::getcost()
{
    return 10*this->iview - this->dcost;
}