#include "Tapchi.h"
#include <iostream>
using namespace std;

void Tapchi::Set()
{
    this->Sach::Set();
    cDangtapchi = new char[100];
    cin.ignore();
    cout << "Nhap dang tap chi: "; cin.getline(this->cDangtapchi,100);
}

void Tapchi::Xuat()
{
    cout << "\tTap chi\n";
    this->Sach::Xuat();
    cout << "Dang tap chi: " << this->cDangtapchi << endl;
}