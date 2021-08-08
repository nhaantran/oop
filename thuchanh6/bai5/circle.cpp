#include "circle.h"
#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159
circle::circle()
{
    this->side = new int;
    this->fradius=0;
}
bool circle::check()
{
    if(this->fradius>0)return 1;
    return 0;
}
void circle::set()
{
    do
    {
        cout<<"Input radius: ";cin>>this->side[0];
        this->fradius=this->side[0];
    } while (this->check()==0);
}
float circle::getradius()
{
    return this->fradius;
}
float circle::perimeter()
{
    return this->fradius*2*PI;
}
float circle::acreage()
{
    return PI*pow(this->fradius,2);
}
void circle::print()
{
    cout<<"\tThis is a circle\n";
    cout<<"perimeter: "<<this->perimeter()<<endl;
    cout<<"acreage: "<<this->acreage()<<endl;
}