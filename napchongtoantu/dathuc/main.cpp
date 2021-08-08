#include "dathuc.h"
#include <iostream>
using namespace std;
int main()
{
    dathuc a,b;
    cout<<"\tNhap da thuc a:\n";
    cin>>a;
    cout<<"Da thuc a: "<<a;
    cout<<"\tNhap da thuc b:\n";
    cin>>b;
    cout<<"Da thuc b: "<<b;
    dathuc tong=a+b;
    cout<<"Tong 2 da thuc:"<<tong;
    dathuc hieu=a-b;
    cout<<"Hieu 2 da thuc:"<<hieu;
    int x;
    cout<<"Nhap gia tri x: ";cin>>x;
    cout<<"Gia tri da thuc a: "<<a.giatri(x)<<endl;
    cout<<"Gia tri da thuc b: "<<b.giatri(x)<<endl;
    cout<<"He so bac cao nhac cua a: "<<a[a.getbac()]<<endl;
    cout<<"He so bac cao nhac cua b: "<<b[b.getbac()]<<endl;
    return 0;
}