#pragma once
class cuocthi
{
protected:
    char *cname;
    int ingay;
    int ithang;
    char *cdiadiem;
    int iculy;
public:
    cuocthi();
    ~cuocthi();
    virtual void set(char*,int,int,char*,int);
    virtual void print();
};