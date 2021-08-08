#include <iostream>
using namespace std;
class Time
{
protected:
    int ihour;
    int iminute;
    int isecond;
public:
    Time();
    Time(int,int,int);
    ~Time();
    void sethour(int);
    void setminute(int);
    void setsecond(int); 
    int gethour();
    int getminute();
    int getsecond();
    void process();
    Time operator + (Time const&);
    friend Time operator - (Time const&, Time const&);
    bool operator > (Time const&);
    bool operator < (Time const&);
    bool operator == (Time const&);
    friend istream& operator >> (istream &is,Time &b);
    friend ostream& operator << (ostream &os,Time &b);
    Time &operator ++();
    Time &operator --();
    void print();
};
