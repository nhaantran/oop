#include "post.h"
#include "picture.h"
#include "video.h"
#include "advertise.h"
#include <iostream>
#include <vector>
using namespace std;
class newsfeed
{
protected:
    vector<post*>baiviet;
    int iprofit;
public:
    newsfeed();
    ~newsfeed();
    void set(int&);
    void print(int);
    void displayrandom(int,int);
    int profit(int);
    void mostlike(int);
};