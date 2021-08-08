#include "Matrix.h"
#include <iostream>

using namespace std;

template <class T>
Matrix<T>::Matrix()
{
	this->nRows = 0;
	this->nCols = 0;
	this->data = NULL;
}

template <class T>
Matrix<T>::Matrix(int r,int c)
{
	this->nRows = r;
	this->nCols = c;
	this->data = new T*[r];
	for (int i = 0; i < r; i++)
		this->data[i] = new T [c];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			this->data[i][j] = 0;
}

template <class T>
void Matrix<T>::setAt(int i,int j, T x)
{
	this->data[i][j] = x;
}

template <class T>
T Matrix<T>::getAt(int i,int j)
{
	return this->data[i][j];
}

template <class T>
void Matrix<T>::display()
{
	for (int i = 0; i < this->nRows; i++)
	{
		for (int j = 0; j < this->nCols; j++)
			cout << this->data[i][j] << " ";
		cout << endl;
	}
}

template <class T>
void Matrix<T>::resize(int r,int c)
{
	this->nCols = c;
	this->nRows = r;
	this->data = new T* [r];
	for (int i = 0; i < r; i++)
		this->data[i] = new T[c];
}

template <typename Type>
Matrix<Type> operator+(const Matrix<Type>& m1, const Matrix<Type>& m2)
{
	Matrix<Type> m;
	int r = m1.nRows;
	int c = m1.nCols;
	m.resize(r, c);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			m.data[i][j] = m1.data[i][j] + m2.data[i][j];
	}

	return m;
}

template <typename Type>
Matrix<Type> operator*(const Matrix<Type>& m1, const Matrix<Type>& m2)
{
	Matrix<Type> m;
	int r = m1.nRows;
	int c = m2.nCols;
	m.resize(r, c);
	for (int i = 0; i < r; i++)
	{
		for (int k = 0; k < c; k++)
		{
			Type sum = 0;
			for (int j = 0; j < m1.nCols; j++)
			{
				sum += m1.data[i][j] * m2.data[j][i];
			}
			m.data[i][k] = sum;
		}
	}
	
	return m;
}

template <class T>
Matrix<T>::~Matrix()
{

}