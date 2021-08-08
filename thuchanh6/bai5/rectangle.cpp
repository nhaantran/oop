#include "rectangle.h"
#include <iostream>
using namespace std;
rectangle::rectangle()
{
    this->side = new int[2];
    this->flength=0;
    this->fwidth=0;
}
float rectangle::getlength()
{
    return this->flength;
}
float rectangle::getwidth()
{
    return this->fwidth;
}
bool rectangle::check()
{
    if(this->flength>0&&this->fwidth>0)
        if(this->flength>=this->fwidth)return 1;
    return 0;
}
void rectangle::set()
{
    do
    {
        cout<<"Input length: ";cin>>this->side[0];
        cout<<"Input width: ";cin>>this->side[1];
        this->fwidth=this->side[1];
        this->flength=this->side[0];
    } while (this->check()==0);
}
float rectangle::perimeter()
{
    return (this->flength+this->fwidth)*2;
}
float rectangle::acreage()
{
    return this->fwidth*this->flength;
}
void rectangle::print()
{
    cout<<"\tThis is a rectangle\n";
    cout<<"perimeter: "<<this->perimeter()<<endl;
    cout<<"acreage: "<<this->acreage()<<endl;
}