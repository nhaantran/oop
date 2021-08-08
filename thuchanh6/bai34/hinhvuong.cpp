#include "hinhvuong.h"
#include <iostream>
using namespace std;

void hinhvuong::set()
{
    cout << "Nhap toa do dinh 1: "; cin >> this->dinh[1].hoanhdo >> this->dinh[1].tungdo;
    cout << "Nhap hoanh do dinh 2: "; cin >> this->dinh[2].hoanhdo;
    this->toado4dinh();
}
void hinhvuong::toado4dinh()
{
    this->hinhchunhat::toado4dinh();
    this->dinh[3].tungdo = this->dodaiday() - abs(this->dinh[2].tungdo);
}
void hinhvuong::xuat()
{
    cout << "\tDay la hinh vuong\n";
    cout << "Toa do 4 diem cua hinh vuong:\n";
    this->tugiac::xuat();
    cout << "Do dai canh: " << this->dodaiday() << endl;;
}


