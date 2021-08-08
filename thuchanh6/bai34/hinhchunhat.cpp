#include "hinhchunhat.h"
#include <iostream>
#include <math.h>
using namespace std;

void hinhchunhat::set()
{
    cout << "Nhap toa do dinh 1: "; cin >> this->dinh[1].hoanhdo >> this->dinh[1].tungdo;
    cout << "Nhap hoanh do dinh 2: "; cin >> this->dinh[2].hoanhdo;
    cout << "Nhap tung do dinh 3: "; cin >> this->dinh[3].tungdo;
    this->toado4dinh();
}

void hinhchunhat::toado4dinh()
{
    this->hinhbinhhanh::toado4dinh();
    this->dinh[3].hoanhdo = this->dinh[2].hoanhdo;
}


void hinhchunhat::xuat()
{
    cout << "Day la hinh chu nhat\n";
    cout << "Toa do 4 diem cua hinh chu nhat:\n";
    this->tugiac::xuat();
    cout << "Do dai canh day: " << this->dodaiday() << endl;
    cout << "Do dai canh ben: " << this->dodaicanh() << endl;
}

