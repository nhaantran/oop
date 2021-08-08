#pragma once
template <class T>
class Matrix
{
private:
	T** data;
	int nRows, nCols;
public:
	Matrix();
	Matrix(int r,int c);
	~ Matrix();

	void setAt(int i,int j, T x);
	T getAt(int i,int j);

	void display();
	void resize(int r, int c);

	friend Matrix operator+(const Matrix& m1, const Matrix& m2);
	friend Matrix operator*(const Matrix& m1, const Matrix& m2);
};

