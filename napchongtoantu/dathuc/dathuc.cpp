#include "dathuc.h"
#include <math.h>
#include <iostream>
using namespace std;

dathuc::dathuc()
{
    this->bac=0;
}
dathuc::dathuc(int bac)
{
    this->heso=new int[bac+1];
    this->bac=bac;
}
dathuc::~dathuc(){}
void dathuc::setbac(int bac)
{
    this->heso=new int[bac+1];
    this->bac=bac;
}
void dathuc::sethesocuabacn(int heso,int n)
{
    if(n>this->bac)return;
    this->heso[n]=heso;
}
int dathuc::getbac()
{
    return this->bac;
}
int dathuc::gethesocuabacn(int n)
{
    return this->heso[n];
}
dathuc dathuc::operator+(dathuc const& a)
{
    int dif;
    dathuc b;
    if (a.bac>this->bac)
    {
        b.bac=a.bac;
        b.heso=new int[b.bac+1];
        for(int i=a.bac;i>this->bac;i--) b.heso[i]=a.heso[i];
        dif=this->bac;
    }
    else if(a.bac<this->bac)
    {
        b.bac=this->bac;
        b.heso=new int[this->bac]+1;
        for(int i=this->bac;i>a.bac;i--) b.heso[i]=this->heso[i];
        dif=a.bac;
    }
    else {dif = a.bac;b.bac=a.bac;b.heso = new int[a.bac+1];}
    for(int i=dif;i>=0;i--) b.heso[i]=a.heso[i]+this->heso[i];
    return b;
}
dathuc dathuc::operator-(dathuc const& a)
{
    int dif;
    dathuc b;
    if (a.bac>this->bac)
    {
        b.bac=a.bac;
        b.heso=new int[b.bac+1];
        for(int i=a.bac;i>this->bac;i--) b.heso[i]=a.heso[i];
        dif=this->bac;
    }
    else if(a.bac<this->bac)
    {
        b.bac=this->bac;
        b.heso=new int[this->bac]+1;
        for(int i=this->bac;i>a.bac;i--) b.heso[i]=this->heso[i];
        dif=a.bac;
    }
    else {dif = a.bac;b.bac=a.bac;b.heso = new int[a.bac+1];}
    for(int i=dif;i>-0;i--) b.heso[i]=this->heso[i]-a.heso[i];
    return b;
}
int dathuc::giatri(int x)
{
    int tong=0;
    for(int i=this->bac;i>=0;i--)
    {
        if(i>0){tong+=this->heso[i]*pow(x,i);}
        else tong+=this->heso[i];
    }
    return tong;
}

istream& operator>>(istream& is, dathuc& a)
{
    cout<<"Nhap bac cho da thuc: ";
    is>>a.bac;
    a.heso = new int[a.bac+1];
    for(int i=a.bac;i>=0;i--) 
    {if(i==0)cout<<"Nhap he so tu do: ";
    else {cout<<"Nhap he so x^"<<i<<": ";}
    is>>a.heso[i];}
    return is;
}
ostream& operator<<(ostream& os, dathuc& a)
{
    for(int i=a.bac;i>=0;i--)
    {
        if(a.heso[i]!=0)
        {if(i==0)os<<a.heso[i]<<endl;
        else{os<<a.heso[i]<<"x^"<<i<<"+";}}
    }
    os<<endl;
    return os;
}

int& dathuc::operator[](int i)
{
    return this->heso[i];
}