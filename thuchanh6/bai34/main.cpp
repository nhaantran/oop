#include "dagiac.h"
#include "tugiac.h"
#include "hinhbinhhanh.h"
#include "hinhchunhat.h"
#include "hinhvuong.h"
#include <iostream>
using namespace std;

int main()
{
    tugiac *a;
    int loai;
    do
    {
        cout << "Nhap 1 neu ban muon nhap hinh binh hanh" << endl
             << "Nhap 2 neu ban muon nhap hinh chu nhat"  << endl
             << "Nhap 3 neu ban muon nhap hinh vuong"     << endl;
        cin >> loai;
        if (loai == 1 || loai == 2 || loai == 3) break;
    } while (1);
    if (loai == 1) a = new hinhbinhhanh;
    if (loai == 2) a = new hinhchunhat;
    if (loai == 3) a = new hinhvuong;
    a->set();
    int x,y,alpha;
    cout <<"Nhap toa do (x,y) ban muon tinh tien: "; cin >> x >> y;
    a->tinhtien(x,y);
    cout << "Nhap goc alpha ban muon xoay: "; cin >> alpha;
    a->xoay(alpha);
    a->xuat();
    return 0;
}