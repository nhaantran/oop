#pragma once
#include "dagiac.h"
class tugiac : public dagiac
{
protected:
    float day,canh;
public:
    tugiac();
    ~tugiac(){}
    virtual void set();
    virtual void tinhtien();
    virtual void xoay(int);
    virtual void tinhtien(int, int);
    virtual void xuat();
};