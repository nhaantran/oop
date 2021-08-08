#include "triangle.h"
#include <math.h>
#include <iostream>
using namespace std;
triangle::triangle()
{
    this->side = new int[3];
    this->fside1=0;
    this->fside2=0;
    this->fside3=0;
}
float triangle::getside1()
{
    return this->fside1;
}
float triangle::getside2()
{
    return this->fside2;
}
float triangle::getside3()
{
    return this->fside3;
}
bool triangle::check()
{
    if(this->fside1+this->fside2>this->fside3&&this->fside1+this->fside3>this->fside2&&this->fside3+this->fside2>this->fside1)return 1;
    return 0;
}
void triangle::set()
{
    do
    {
        cout<<"Input side1: ";cin>>this->side[0];
        cout<<"Input side2: ";cin>>this->side[1];
        cout<<"Input side3: ";cin>>this->side[2];
        this->fside1=this->side[0];
        this->fside2=this->side[1];
        this->fside3=this->side[2];
    } while (this->check()==0);
    
}
float triangle::perimeter()
{
    return this->fside1+this->fside2+this->fside3;
}
float triangle::acreage()
{
    float p=(this->fside1+this->fside2+this->fside3)/2;
    return sqrt(p*(p-this->fside1)*(p-this->fside2)*(p-this->fside3));
}
void triangle::print()
{
    cout<<"\tThis is a triangle\n";
    cout<<"perimeter: "<<this->perimeter()<<endl;
    cout<<"acreage: "<<this->acreage()<<endl;
}