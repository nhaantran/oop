#pragma once
#include "geometry.h"
class circle : public geometry
{
protected:
    float fradius;
public:
    circle();
    ~circle(){}
    bool check();
    void set();
    float getradius();
    float perimeter();
    float acreage();
    void print();
};