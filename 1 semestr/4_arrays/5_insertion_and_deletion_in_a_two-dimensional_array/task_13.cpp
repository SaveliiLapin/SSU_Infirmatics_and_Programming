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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

int del(int** mas, int n, int x)
{
	int k = 0;
	bool isin = false;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mas[i][j] == x)
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
			for (int j = 0; j < n; j++)
			{
				mas[i - k][j] = mas[i][j];
			}
		}

		isin = false;
	}

	for (int i = n - 1; i > n - k - 1; i--)
	{
		delete[] mas[i];
	}

	n = n - k;

	return n;
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

	n = del(mas, n, x);
	print(mas, n, m);

	system("pause");
	return 0;
}