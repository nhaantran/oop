#pragma once
#include "video.h"
class advertise : public video
{
protected:
    int icuscost;
public:
    advertise();
    ~advertise();
    void set(string,string,string,string,int,int,double);
    void print();
    double getcost();
};