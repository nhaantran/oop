#pragma once

#include "Sach.h"

class Sachgiaokhoa : public Sach
{
protected:
    int iLop;
public:
    Sachgiaokhoa(){}
    ~Sachgiaokhoa(){}
    void Set();
    void Xuat();
};