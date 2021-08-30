#include "post.h"
#include "picture.h"
#include "video.h"
#include "advertise.h"
#include "newsfeed.h"
#include <iostream>
using namespace std;


int main()
{
    int amount=0;
    newsfeed facebook;
    //a
    facebook.set(amount);
    facebook.print(amount);
    //b
    
    facebook.displayrandom(0,amount);
    //c
    cout<<"Profit: "<<facebook.profit(amount)<<endl;
    //d 
    cout<<"Most likes post:\n";
    facebook.mostlike(amount);
    return 0;   
}