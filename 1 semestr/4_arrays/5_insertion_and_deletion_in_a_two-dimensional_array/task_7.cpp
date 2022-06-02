#include<iostream>
using namespace std;

int** create(int n)
{
	int** mtrx = new int* [n];

	for (int i = 0; i < n; i++)
	{
		mtrx[i] = new int[n * 2];
	}

	cout << "Введите элементы матрицы:" << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mtrx[i][j];
		}
	}

	return mtrx;
}

void print(int** mtrx, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mtrx[i][j] << " ";
		}
		cout << endl;
	}
}

void exchange(int** mtrx, int& m)
{
	int k = 0, temp, kk = 0;

	for (int j = 0; j < m; j++)
	{
		temp = 0;
		for (int i = 0; i < m; i++)
		{
			if (mtrx[i][j] % 2 != 0)
			{
				temp++;
			}
		}

		if (temp == m)
		{
			k++;
			kk++;
		}
	}

	for (int j = m - 1; j >= 0; j--)
	{
		temp = 0;

		for (int i = 0; i < m; i++)
		{
			if (mtrx[i][j] % 2 == 0)
			{
				temp++;
			}
		}

		if (temp == m)
		{
			for (int i = 0; i < m; i++)
			{
				mtrx[i][j + k] = mtrx[i][j];
				mtrx[i][j + k - 1] = mtrx[i][j];
			}
			k--;
		}
		else
		{
			for (int i = 0; i < m; i++)
			{
				mtrx[i][j + k] = mtrx[i][j];
			}
		}
	}

	m += kk;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, m;
	int** mtrx;

	cout << "Введите размер матрицы: ";
	cin >> n;

	m = n;

	mtrx = create(n);
	exchange(mtrx, m);
	print(mtrx, n, m);

	system("pause");
	return 0;
}
