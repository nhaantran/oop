#include "cuocthi.h"
#include <iostream>
using namespace std;

cuocthi::cuocthi(){}
cuocthi::~cuocthi(){}
void cuocthi::set(char *cname,int ingay,int ithang,char *cdiadiem,int iculy)
{
    this->cname=new char[30];
    this->cname=cname;
    this->ingay=ingay;
    this->ithang=ithang;
    this->cdiadiem=new char[30];
    this->cdiadiem=cdiadiem;
    this->iculy=iculy;
}
void cuocthi::print()
{
    
}