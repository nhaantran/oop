#pragma once
#include "geometry.h"
class rectangle : public geometry
{
protected:
    float flength;
    float fwidth;
public:
    rectangle();
    ~rectangle(){}
    float getlength();
    float getwidth();
    bool check();
    void set();
    float perimeter();
    float acreage();
    void print();
};