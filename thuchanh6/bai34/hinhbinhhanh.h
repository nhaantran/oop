#pragma once
#include "tugiac.h"

class hinhbinhhanh : public tugiac
{
protected:
    float day, canh;
public:
    hinhbinhhanh(){}
    ~hinhbinhhanh(){}
    void set();
    void toado4dinh();
    float dodaiday();
    float dodaicanh();
    void xuat();
};