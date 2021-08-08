#include "Tieuthuyet.h"
#include <iostream>
using namespace std;

void Tieuthuyet::Set()
{
    this->Sach::Set();
    this->cTheloai = new char[100];
    cin.ignore();
    cout << "Nhap the loai: "; fflush(stdin); cin.getline(this->cTheloai,100);
}

void Tieuthuyet::Xuat()
{
    cout << "\tTieu thuyet\n";
    this->Sach::Xuat();
    cout << "The loai: "; cout << this->cTheloai << endl;
}