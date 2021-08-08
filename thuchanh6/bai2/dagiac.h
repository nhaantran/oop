#pragma once
struct diem
{
    int hoanhdo, tungdo;
};

class dagiac
{
protected:
    int sodinh;
    diem *dinh;
public:
    dagiac();
    virtual ~dagiac(){}
    virtual void set();
    virtual void tinhtien(int,int);
    virtual void xoay(int);
    virtual void xuat();
};