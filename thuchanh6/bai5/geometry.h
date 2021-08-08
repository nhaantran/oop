#pragma once
class geometry
{
protected:
    int *side;
public:
    geometry();
    virtual ~geometry(){};
    virtual void set()=0;
    virtual bool check()=0;
    virtual float perimeter()=0;
    virtual float acreage()=0;    
    virtual void print()=0;
};