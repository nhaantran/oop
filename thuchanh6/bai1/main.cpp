#include "Sach.h"
#include "Sachgiaokhoa.h"
#include "Tieuthuyet.h"
#include "Tapchi.h"
#include "Thuvien.h"
#include <iostream>
using namespace std;

int main()
{
    int soluongsach;
    cout<<"Nhap so luong sach: ";cin>>soluongsach;
    Thuvien UIT;
    UIT.Set(soluongsach);
    UIT.Xuat();
    return 0;
}
