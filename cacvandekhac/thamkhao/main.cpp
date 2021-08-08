#include "Matrix.h"
#include <iostream>

using namespace std;

void Nhap(Matrix<int> &m, int r, int c)
{
	int x;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
		{
			cin >> x;
			m.setAt(i, j, x);
		}
}

int main()
{
	Matrix<int> m1, m2;
	int key;

	do
	{
		cout << "1. Cong 2 ma tran\n2. Nhan 2 ma tran\nNhap: ";
		cin >> key;
	} while (key != 1 && key != 2);
	if (key == 1)
	{
		int r, c;
		cout << "So hang: ";
		cin >> r;
		cout << "So cot: ";
		cin >> c;
		m1.resize(r, c);
		m2.resize(r, c);
		cout << "Phan tu cua ma tran 1\n";
		Nhap(m1, r, c);
		cout << "Phan tu cua ma tran 2\n";
		Nhap(m2, r, c);
		cout << "Ma tran 1\n";
		m1.display();
		cout << "Ma tran 2\n";
		m2.display();
		cout << "Ma tran 1 + Ma tran 2\n";
		Matrix<int> m = m1 + m2;
		m.display();
	}
	else
	{
		int r, c, c1;
		cout << "Ma tran 1\n";
		cout << "So hang: ";
		cin >> r;
		cout << "So cot: ";
		cin >> c;
		m1.resize(r, c);
		cout << "Phan tu cua ma tran 1\n";
		Nhap(m1, r, c);
		cout << "Ma tran 2\n";
		cout << "So hang = So hang cua ma tran 1 = " << c;
		cout << "\nSo cot: ";
		cin >> c1;
		m2.resize(c, c1);
		cout << "Phan tu cua ma tran 2\n";
		Nhap(m2, c, c1);
		cout << "Ma tran 1\n";
		m1.display();
		cout << "Ma tran 2\n";
		m2.display();
		cout << "Ma tran 1 * Ma tran 2\n";
		Matrix<int> m = m1 * m2;
		m.display();
	}

	return 0;
}