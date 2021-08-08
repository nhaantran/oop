#include "matrix.h"
#include <iostream>
using namespace std;
Matrix::Matrix()
{
    this->nRows=0;
    this->nCols=0;
}
Matrix::Matrix(int r,int c)
{
    this->nRows=r;
    this->nCols=c;
    this->data = new int*[this->nRows];
    for(int i=0;i<this->nRows;i++)
        this->data[i] = new int[this->nCols];
}
Matrix::~Matrix(){}
void Matrix::setAt(int i, int j, int x)
{
    this->data[i][j] = x;
}
int Matrix::getAt(int i, int j)
{
    return this->data[i][j];
}
void Matrix::display()
{
    for(int i=0;i<this->nRows;i++)
    {
        for(int j=0;j<this->nRows;j++)
            cout<<this->data[i][j]<< " ";
        cout<<endl;
    }
}
void Matrix::resize(int r, int c)
{
    this->nRows=r;
    this->nCols=c;
}
Matrix operator+(const Matrix &m1, const Matrix &m2)
{
    Matrix m(m1.nRows,m1.nCols);
    for (int i=0;i<m1.nRows;i++)
        for(int j=0;j<m1.nCols;j++)
            m.data[i][j]=m1.data[i][j]+m2.data[i][j];
    return m;
}
Matrix operator*(const Matrix &m1, const Matrix &m2)
{
    Matrix m(m1.nRows,m1.nCols);
    for(int f=0;f<m1.nRows;f++)
        for (int i=0;i<m2.nCols;i++)
            for(int j=0;j<m1.nCols;j++)
                m.data[f][i]+=m1.data[f][j]*m2.data[j][i];
    return m;
}