#include <iostream>


using namespace std;

template <typename T>
T** create(int n, int m)
{
	T** mtrx = new T * [n];

	for (int i = 0; i < n; i++)
	{
		mtrx[i] = new T[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mtrx[i][j];
		}
	}

	return mtrx;
}

template <typename T>
void print(T** mtrx, int n, int m)
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

template <typename T>
T** exchange(T** mtrx, T* X, int n, int m)
{
	int temp;

	for (int i = 0; i < n; i++)
	{
		temp = 0;
		for (int j = 0; j < m; j++)
		{
			if (mtrx[i][j] == (int)mtrx[i][j] && (int)mtrx[i][j] % 2 != 0)
			{
				temp++;
			}
		}

		if (temp == m)
		{
			for (int j = 0; j < m; j++)
			{
				mtrx[i][j] = X[j];
			}
		}
	}

	return mtrx;
}


int main()
{
	setlocale(LC_ALL, "RUS");

	int n, m;

	cout << "Введите размеры массива:" << endl;
	cin >> n >> m;

	int* X = new int[m];

	cout << "Введите массив целых чисел X длиной " << m << endl;

	for (int i = 0; i < m; i++)
	{
		cin >> X[i];
	}

	cout << "Введите матрицу целых чисел:" << endl;
	int** mtrx = create<int>(n, m);
	mtrx = exchange(mtrx, X, n, m);
	cout << "Измененная матрица целых чисел:" << endl;
	print(mtrx, n, m);


	double* XX = new double[m];
	cout << "Введите массив чисел с плавающей точкой XX длиной " << m << endl;

	for (int i = 0; i < m; i++)
	{
		cin >> XX[i];
	}

	cout << "Введите матрицу чисел с плавающей запятой:" << endl;
	double** mtrx1 = create<double>(n, m);
	mtrx1 = exchange(mtrx1, XX, n, m);
	cout << "Измененная матрица чисел с плавабщей запятой:" << endl;
	print(mtrx1, n, m);

	system("pause");
	return 0;
}