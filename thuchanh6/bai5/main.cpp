#include "geometry.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include <iostream>
using namespace std;

struct node
{
    geometry *info; node *pNext;
};
struct List
{
    node *pHead;
    node *pTail;
};
void CreateList(List &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}
node* CreateNode(geometry *x)
{
    node *p;
    p = new node;
    p->info = x; p->pNext = NULL;
    return p;
}
void AddTail(List &l, node *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = p;
        l.pTail = p;
    }
    else 
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}
void removefirstnode(List &list)
{
    node *pDel = list.pHead; 
    list.pHead = list.pHead -> pNext;
    pDel -> pNext = NULL;
    delete pDel;
    pDel = NULL;
}
int main()
{
    List storage;
    node *p,*q;
    CreateList(storage);
    int choice,check1,check2;
    float width,length,side1,side2,side3,radius;
    geometry *List;
    do
    {
        cout<<"Type 1 to input geometry dimension\nType 2 to display perimeter and acreage that have been input\nType 3 to end the program\nInput: ";
        cin>>choice;
        check1==0;
        switch (choice)
        {
        case 1:
            char type;
            check2=0;
            do
            {
                cout<<"Type 'A' to input rectangle\nType 'B' to input triangle\nType 'C' to input circle\nInput: ";
                cin>>type;
                switch (type)
                {
                case 'A':case 'a':
                    List = new rectangle;
                    check2++;
                    break;
                case 'B':case 'b':
                    List = new triangle;
                    check2++;
                    break;
                case 'C':case 'c':
                    List = new circle;
                    check2++;
                    break;
                default:
                    cout<<"Please type again!\n";
                    break;
                }
            } while (check2==0);
            List->set();
            p = CreateNode(List);
            AddTail(storage,p);
            break;
        case 2:
            q = storage.pHead;
            while (q!=NULL)
            {
                q->info->print();
                q=q->pNext;
            }
            while(storage.pHead!=NULL)
            {
                removefirstnode(storage);
            }
            break;
        default:
            cout<<"Please type agian!\n";
            break;
        }
    } while (choice!=3);
}