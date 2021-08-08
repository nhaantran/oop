#pragma once
#include "geometry.h"
class triangle : public geometry
{
protected:
    float fside1;
    float fside2;
    float fside3;
public:
    triangle();
    ~triangle(){}
    float getside1();
    float getside2();
    float getside3();
    bool check();
    void set();
    float perimeter();
    float acreage();
    void print();
};