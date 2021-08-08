#pragma once
#include "Sach.h"
#include "Sachgiaokhoa.h"
#include "Tapchi.h"
#include "Tieuthuyet.h"
#include <iostream>
#include <vector>
using namespace std;
class Thuvien
{
private:
    vector<Sach*> sach;
public:
    Thuvien(){}
    ~Thuvien(){}
    void Set(int);
    void Xuat();
};

