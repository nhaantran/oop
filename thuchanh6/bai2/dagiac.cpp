#include "dagiac.h"
#include <math.h>
#include <iostream>
using namespace std;
dagiac::dagiac(){}
void dagiac::set()
{
    for (int i = 0; i < this->sodinh; i++)
    {
        cout << "Nhap (x,y): "; cin >> this->dinh[i].hoanhdo >> this->dinh[i].tungdo;
    }
}
void dagiac::xuat()
{
    for (int i = 0; i < this->sodinh; i++)
    {
        cout << "(" << this->dinh[i].hoanhdo  << "," << this->dinh[i].tungdo<< ")" << endl;
    }
}
void dagiac::tinhtien(int x, int y)
{
    for (int i = 0; i < this->sodinh; i++)
    {
        this->dinh[i].hoanhdo += x;
        this->dinh[i].tungdo += y;
    }
}
void dagiac::xoay(int alpha)
{
    for (int i = 0; i < this->sodinh; i++)
    {
        int a = this->dinh[i].hoanhdo;
        this->dinh[i].hoanhdo = a*cos(alpha) - this->dinh[i].tungdo*sin(alpha);
        this->dinh[i].tungdo = this->dinh[i].tungdo*cos(alpha) + a*sin(alpha);
    }
}