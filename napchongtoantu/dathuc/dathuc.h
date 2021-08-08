#include <iostream>
using namespace std;
class dathuc
{
protected:
    int* heso;
    int bac;
public:
    dathuc();
    dathuc(int);
    ~dathuc();
    void sethesocuabacn(int,int);
    void setbac(int);
    int getbac();
    int gethesocuabacn(int n);
    dathuc operator+(dathuc const&);
    dathuc operator-(dathuc const&);
    int giatri(int x);
    friend istream& operator >>(istream &is, dathuc &a);
    friend ostream& operator <<(ostream &os, dathuc &a);
    int &operator[](int i);
};
