#include "Thuvien.h"
#include <iostream>
using namespace std;

void Thuvien::Set(int soluongsach)
{
    int itheloaisach;
    for (int i = 0; i < soluongsach; i++)
    {
        Sach *A;
        do
        { 
            cout<< "-Nhap 1 neu ban muon mua sach giao khoa" << endl
                << "-Nhap 2 neu ban muon mua tieu thuyet" << endl
                << "-Nhap 3 neu ban muon mua tap chi" << endl;
            cin >> itheloaisach;
            if (itheloaisach == 1 || itheloaisach == 2 || itheloaisach == 3 ) break;
        } while(1);
        if (itheloaisach == 1) A = new Sachgiaokhoa;
        if (itheloaisach == 2) A = new Tieuthuyet;
        if (itheloaisach == 3) A = new Tapchi;
        A->Set();
        this->sach.push_back(A);
    }
}

void Thuvien::Xuat()
{
    for (int i = 0; i < this->sach.size();i++)
    {
        this->sach.at(i)->Xuat();
    }
}
