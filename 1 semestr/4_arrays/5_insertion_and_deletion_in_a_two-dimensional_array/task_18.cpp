#include <iostream>


using namespace std;

int** create(int n)
{
	int** mas;

	mas = new int* [n];

	for (int i = 0; i < n; i++)
	{
		mas[i] = new int[n];
	}

	cout << "Введите элементы матрицы: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}

	return mas;
}

void print(int** mas, int n, int m)
{
	if (m != 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << mas[i][j] << " ";
			}
			cout << endl;
		}
	}
}

int del(int** mas, int m, int x)
{
	int k = 0;
	bool isin = false;

	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < m; i++)
		{
			if (mas[i][j] % x == 0)
			{
				isin = true;
			}
		}

		if (isin)
		{
			k++;
		}
		else if (k > 0)
		{
			for (int i = 0; i < m; i++)
			{
				mas[i][j - k] = mas[i][j];
			}
		}

		isin = false;
	}

	m = m - k;

	return m;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, x;

	cout << "Введите размер матрицы: ";
	cin >> n;
	int m = n;

	int** mas = create(n);

	cout << "Введите x: ";
	cin >> x;

	m = del(mas, m, x);
	print(mas, n, m);

	system("pause");
	return 0;
}