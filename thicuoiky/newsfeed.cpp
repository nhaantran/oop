#include "newsfeed.h"
#include <iostream>
using namespace std;

newsfeed::newsfeed(){}
newsfeed::~newsfeed(){}
void newsfeed::set(int &amount)
{
    post *facebook;
    string sid, sowner,sdate, scaption;
    int ilike, iview;double dcost;
    do
    {
        int itype;
        cout<<"Input\n1 if you want to post normal post\n2 if you want to post picture\n3 if you want to post video\n4 if you want to post advertisement\n0 to end\n";
        cin>>itype;
        if(itype==0) break;
        if(itype==1) facebook = new post;
        if(itype==2) facebook = new picture;
        if(itype==3) facebook = new video;
        if(itype==4) facebook = new advertise;
        amount++;
        cout << "Input id, owner, date, caption:\n"; cin.ignore();
        getline(cin,sid);getline(cin,sowner);getline(cin,sdate);getline(cin,scaption);
        cout<< "Input number of likes, views:\n"; cin>> ilike>>iview;
        facebook->set(sid, sowner,sdate, scaption,ilike,iview,0);
        this->baiviet.push_back(facebook);
    } while (1);
}
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
void newsfeed::print(int amount)
{
    for(int i=0;i<amount;i++)
    {
        this->baiviet.at(i)->print();   
    }
}
void newsfeed::displayrandom(int a,int amount)
{
    int count=0;
    int run=0;
    do
    {
        int choose=0;
        cout<<"Input\n1 to display random\n2 to stop\n";
        cin>>choose;
        if(choose==2) break;
        else
        {
            count++;
            if(count%=3==0){
                while(run<amount)
                {
                    if(this->baiviet.at(run)->gettype()==3) {this->baiviet.at(run)->view();this->baiviet.at(run)->print();break;}
                    run++;
                }   
            }
            int ran = random(a,amount);
            this->baiviet.at(a)->view();
            this->baiviet.at(ran)->print();
        }
    } while (1);
}
int newsfeed::profit(int amount)
{
    for(int i=0;i<amount;i++)
    {
        this->iprofit+=this->baiviet.at(i)->getcost();
    }
    return this->iprofit;
}
void newsfeed::mostlike(int amount)
{
    int max1=0;
    int max2=0;
    int max3=0;
    int max4=0;
    for(int i=1;i<amount;i++)
    {
        if(this->baiviet.at(i)->gettype()==0) if(max1<this->baiviet.at(i)->getlike()) max1 = this->baiviet.at(i)->getlike();
        if(this->baiviet.at(i)->gettype()==1) if(max2<this->baiviet.at(i)->getlike()) max2 = this->baiviet.at(i)->getlike();
        if(this->baiviet.at(i)->gettype()==2) if(max3<this->baiviet.at(i)->getlike()) max3 = this->baiviet.at(i)->getlike();
        if(this->baiviet.at(i)->gettype()==3) if(max4<this->baiviet.at(i)->getlike()) max4 = this->baiviet.at(i)->getlike();
    }
    for(int i=0;i<amount;i++)
    {
        if(this->baiviet.at(i)->getlike()==max1||this->baiviet.at(i)->getlike()==max2||this->baiviet.at(i)->getlike()==max3||this->baiviet.at(i)->getlike()==max4)
        this->baiviet.at(i)->print();
    }
    
}