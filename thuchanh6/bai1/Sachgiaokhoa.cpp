#include "Sachgiaokhoa.h"
#include <iostream>
using namespace std;

void Sachgiaokhoa::Set()
{
    this->Sach::Set();
    cout << "Nhap lop: "; cin >> this->iLop;
}

void Sachgiaokhoa::Xuat()
{
    cout << "\tSach giao khoa\n";
    this->Sach::Xuat();
    cout << "Lop: " << this->iLop << endl;
}