#pragma once
#include "dagiac.h"

class tamgiac : public dagiac 
{
public:
    tamgiac();
    ~tamgiac(){}
    virtual void set();
    virtual void tinhtien();
    virtual void xoay(int);
    virtual void tinhtien(int, int);
    virtual void xuat();
};