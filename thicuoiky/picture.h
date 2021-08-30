#pragma once
#include "post.h"
class picture : public post
{
protected:
    string ssource;
public:
    picture();
    ~picture();
    void set(string,string,string,string,int,int,double);
    void print();
    double getcost();
};