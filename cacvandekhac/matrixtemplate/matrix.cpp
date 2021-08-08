#include "matrix.h"
#include <iostream>
using namespace std;
template <class T>
Matrix<T>::Matrix()
{
    this->nRows=0;
    this->nCols=0;
}
template <class T>
Matrix<T>::Matrix(int r,int c)
{
    this->nRows=r;
    this->nCols=c;
    this->data = new T*[this->nRows];
    for(int i=0;i<this->nRows;i++)
        this->data[i] = new T[this->nCols];
}
template <class T>
Matrix<T>::~Matrix(){}
template <class T>
void Matrix<T>::setAt(int i, int j, T x)
{
    this->data[i][j] = x;
}
template <class T>
int Matrix<T>::getAt(int i, int j)
{
    return this->data[i][j];
}
template <class T>
void Matrix<T>::display()
{
    for(int i=0;i<this->nRows;i++)
    {
        for(int j=0;j<this->nRows;j++)
            cout<<this->data[i][j]<< " ";
        cout<<endl;
    }
}
template <class T>
void Matrix<T>::resize(int r, int c)
{
    this->nRows=r;
    this->nCols=c;
}
template <class Y>
Matrix<Y> operator+(const Matrix<Y> &m1, const Matrix<Y> &m2)
{
    Matrix<Y> m(m1.nRows,m1.nCols);
    for (int i=0;i<m1.nRows;i++)
        for(int j=0;j<m1.nCols;j++)
            m.data[i][j]=m1.data[i][j]+m2.data[i][j];
    return m;
}
template <class Y>
Matrix<Y> operator*(const Matrix<Y> &m1, const Matrix<Y> &m2)
{
    Matrix<Y> m(m1.nRows,m1.nCols);
    for(int f=0;f<m1.nRows;f++)
        for (int i=0;i<m2.nCols;i++)
            for(int j=0;j<m1.nCols;j++)
                m.data[f][i]+=m1.data[f][j]*m2.data[j][i];
    return m;
}