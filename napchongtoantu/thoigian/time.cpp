#include "time.h"
#include <iostream>
using namespace std;
Time::Time()
{
    this->ihour=0;
    this->iminute=0;
    this->isecond=0;
}
Time::Time(int hour, int min, int sec)
{
    this->ihour=hour;
    this->iminute=min;
    this->isecond=sec;
}
Time::~Time(){}
void Time::sethour(int hour)
{
    this->ihour=hour;
}
void Time::setminute(int min)
{
    this->iminute=min;
}
void Time::setsecond(int sec)
{
    this->isecond=sec;
}
int Time::gethour()
{
    return this->ihour;
}
int Time::getminute()
{
    return this->iminute;
}
int Time::getsecond()
{
    return this->isecond;
}
void Time::process()
{
    this->iminute+=this->isecond/60;
    this->isecond%=60;
    this->ihour+=this->iminute/60;
    this->iminute%=60;
}
Time Time::operator+(Time const& a)
{
    Time s;
    s.ihour=this->ihour+a.ihour;
    s.iminute=this->iminute+a.iminute;
    s.isecond=this->isecond+a.isecond;
    return s;
}
Time operator-(Time const& a, Time const& b)
{
    Time s;
    s.ihour=a.ihour-b.ihour;
    s.iminute=a.iminute-b.iminute;
    s.isecond=a.isecond-b.isecond;
    return s;
}
bool Time::operator>(Time const& a)
{
    if(this->ihour>a.ihour) return 1;
    else if(this->ihour==a.ihour)
    {
        if(this->iminute>a.iminute) return 1;
        else
        {
            if(this->iminute==a.iminute)
            {
                if(this->isecond>a.isecond) return 1;
            }
        }
    }
    return 0;
}
bool Time::operator<(Time const& a)
{
    if(this->ihour<a.ihour) return 1;
    else if(this->ihour==a.ihour)
    {
        if(this->iminute<a.iminute) return 1;
        else
        {
            if(this->iminute==a.iminute)
            {
                if(this->isecond<a.isecond) return 1;
            }
        }
    }
    return 0;
}
bool Time::operator==(Time const& a)
{
    if(this->ihour==a.ihour&&this->iminute==a.iminute&&this->isecond==a.isecond)
        return 1;
    return 0;
}
istream& operator >> (istream &is,Time &b)
{
    cout<<"Input hour: ";
    is>>b.ihour;
    while(b.ihour<0)
    {cout<<"Input hour again: ";
    is>>b.ihour;}
    cout<<"Input minute: ";
    is>>b.iminute;
    while(b.iminute<0)
    {cout<<"Input minute again: ";
    is>>b.iminute;}
    cout<<"Input second: ";
    is>>b.isecond;
    while(b.isecond<0)
    {cout<<"Input seconde again: ";
    is>>b.isecond;}
    return is;
}
ostream& operator << (ostream &os,Time &b)
{
    os<<b.ihour<<"h "<<b.iminute<<"min "<<b.isecond<<"sec\n";
    return os;
}
Time &Time::operator++()
{
    this->isecond=++this->isecond;
    return *this;  
}
Time &Time::operator--()
{
    this->isecond=--this->isecond;
    return *this;  
}
void Time::print()
{
    cout<<this->ihour<<"h "<<this->iminute<<"min "
        <<this->isecond<<"s\n";
}
