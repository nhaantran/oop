#include <iostream>
#include "dagiac.h"
#include "tugiac.h"
#include "tamgiac.h"
using namespace std;
int main()
{
    dagiac *test;
    int loai;
    do
    {
        cout << "Nhap 1 neu ban muon thao tac tren tam giac\nNhap 2 neu ban muon thao tac tren tu giac\n";
        cin >> loai;
        if (loai == 1 || loai == 2) break;
    } while(1);
    if (loai == 1) test = new tamgiac;
    else test = new tugiac;
    test->set(); test->xuat();
    int x,y,alpha;
    cout <<"Nhap toa do (x,y) ban muon tinh tien: "; cin >> x >> y;
    test->tinhtien(x,y); test->xuat();
    cout << "Nhap goc alpha ban muon xoay: "; cin >> alpha;
    test->xoay(alpha); test->xuat();
    return 0;
}