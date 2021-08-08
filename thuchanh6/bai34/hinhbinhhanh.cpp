#include "hinhbinhhanh.h"
#include <math.h>
#include <iostream>
using namespace std;

void hinhbinhhanh::set()
{
    cout << "Nhap toa do dinh 1: ";cin >> this->dinh[1].hoanhdo >> this->dinh[1].tungdo;
    cout << "Nhap hoanh do dinh 2: "; cin >> this->dinh[2].hoanhdo;
    cout << "Nhap toa do dinh 3: "; cin >>this->dinh[3].hoanhdo >> this->dinh[3].tungdo;
    this->toado4dinh();
}

void hinhbinhhanh::toado4dinh()
{
    this->dinh[2].tungdo = this->dinh[1].tungdo;
    this->dinh[4].tungdo = this->dinh[3].tungdo;
    this->dinh[4].hoanhdo = this->dodaiday() - abs(this->dinh[3].hoanhdo);
}

float hinhbinhhanh::dodaiday()
{
    this->day = abs(this->dinh[2].hoanhdo - this->dinh[1].hoanhdo);
    return this->day;
}

float hinhbinhhanh::dodaicanh()
{
    this->canh = sqrt(pow (this->dinh[1].hoanhdo - this->dinh[2].hoanhdo,2) + pow (this->dinh[1].tungdo - this->dinh[4].tungdo,2));
    return this->canh;
}

void hinhbinhhanh::xuat()
{
    cout << "\tDay la hinh binh hanh\n";
    cout << "Toa do 4 diem cua hinh binh hanh:\n";
    this->tugiac::xuat();
    cout << "Do dai canh day : "<< this->dodaiday() << endl;
    cout << "Do danh canh ben: "<< this->dodaicanh() << endl;
}