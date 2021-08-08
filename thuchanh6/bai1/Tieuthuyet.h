#pragma once
#include "Sach.h"

class Tieuthuyet : public Sach
{
protected:
    char* cTheloai;
public:
    Tieuthuyet(){}
    ~Tieuthuyet(){}
    void Set();
    void Xuat();
};