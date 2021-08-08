#include "Sach.h"
#include <iostream>
using namespace std;

void Sach::Set()
{
    this->cTen = new char[100];
    this->cNXB = new char[100];
    cin.ignore();
    cout << "Nhap ten sach: ";  cin.getline(this->cTen,100);
    cout << "Nhap ten NXB:  "; cin.getline(this->cNXB,100);
    cout << "Nhap nam XB: "  ;cin >> this->iNamXB;
    cout << "Nhap so trang: ";cin >> this->iTrang;
    cout << "Nhap gia ban: " ;cin >> this->fGiaBan;
}

void Sach::Xuat()
{
    cout << "Ten sach: " << this->cTen << endl
         << "Ten NXB: "    << this->cNXB << endl
         << "Nam XB: "     << this->iNamXB<<endl
         << "So trang: "   << this->iTrang<<endl
         << "Gia ban: "    << this->fGiaBan<<endl;
}