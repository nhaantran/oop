#pragma once
class Sach
{
protected:
    char *cTen;
    char *cNXB;
    int iNamXB;
    int iTrang;
    float fGiaBan;
public:
    Sach(){}
    ~Sach(){}
    virtual void Set();
    virtual void Xuat();
};