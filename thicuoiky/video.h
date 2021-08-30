#pragma once
#include "post.h"
class video : public post
{
protected:
    string ssource;
    int itime;
public:
    video();
    ~video();
    void set(string,string,string,string,int,int,double);
    void print();
    double getcost();

};