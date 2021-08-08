#include "matrix.h"
#include <iostream>
using namespace std;
int main()
{
    int cols1,rows1,cols2,rows2;
    cout<<"Input rows for matrix 1: ";cin>>rows1;
    cout<<"Input cols for matrix 1: ";cin>>cols1;
    Matrix<int> m1(rows1,cols1);
    cout<<"Input rows for matrix 2: ";cin>>rows2;
    cout<<"Input cols for matrix 2: ";cin>>cols2;
    Matrix<int> m2(rows2,cols2);
    int x;
    cout<<"Input matrix 1:\n";
    for(int i=0;i<rows1;i++)
        for(int j=0;j<cols1;j++)
            {cin>>x;m1.setAt(i,j,x);}
    cout<<"Input matrix 2:\n";
    for(int i=0;i<rows2;i++)
        for(int j=0;j<cols2;j++)
            {cin>>x;m2.setAt(i,j,x);}
    Matrix<int> m3(rows1,cols2);
    m3 = m1*m2;
    m3.display();
    return 0;
}