#include<iostream>
using namespace std;

int** create(int n)
{
	int** mtrx = new int* [n * 2];

	for (int i = 0; i < n * 2; i++)
	{
		mtrx[i] = new int[n];
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

void exchange(int** mtrx, int& n)
{
	int k = 0, temp, kk = 0;

	for (int i = 0; i < n; i++)
	{
		temp = 0;
		for (int j = 0; j < n; j++)
		{
			if (mtrx[i][j] % 2 != 0)
			{
				temp++;
			}
		}

		if (temp == n)
		{
			k++;
			kk++;
		}
	}

	for (int i = n - 1; i >= 0; i--)
	{
		temp = 0;

		for (int j = 0; j < n; j++)
		{
			if (mtrx[i][j] % 2 != 0)
			{
				temp++;
			}
		}

		if (temp == n)
		{
			for (int j = 0; j < n; j++)
			{
				mtrx[i + k][j] = mtrx[i][j];
				mtrx[i + k - 1][j] = mtrx[i][j];
			}
			k--;
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				mtrx[i + k][j] = mtrx[i][j];
			}
		}
	}

	n += kk;
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
	exchange(mtrx, n);
	print(mtrx, n, m);

	system("pause");
	return 0;
}
