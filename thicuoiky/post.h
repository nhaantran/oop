#pragma once
#include <string>
using namespace std;
class post
{
protected:
    string sid;
    string sowner;
    string sdate;
    string scaption;
    int ilike;
    int iview;
    double dcost;
    int itype;
public:
    post();
    ~post();
    virtual void set(string,string,string,string,int,int,double);
    int view();
    int getlike();
    int gettype();
    virtual void print();
    virtual double getcost();
};