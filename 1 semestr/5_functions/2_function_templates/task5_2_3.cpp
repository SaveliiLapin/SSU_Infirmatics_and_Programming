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
T** exchange(T** mtrx, int n, int m)
{
	for (int i = 0; i < n - 1; i = i + 2)
	{
		for (int j = 0; j < m; j++)
		{
			swap(mtrx[i][j], mtrx[i + 1][j]);
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

	 cout << "Введите матрицу целых чисел:" << endl;
	 int** mtrx = create<int>(n, m);
	 mtrx = exchange(mtrx, n, m);
	 cout << "Измененная матрица целых чисел:" << endl;
	 print(mtrx, n, m);

	 cout << "Введите матрицу чисел с плавающей точкой:" << endl;
	 double** mtrx1 = create<double>(n, m);
	 mtrx1 = exchange(mtrx1, n, m);
	 cout << "Измененная матрица чисел с плавающей точкой:" << endl;
	 print(mtrx1, n, m);

	 cout << "Введите матрицу знаков:" << endl;
	 char** mtrx2 = create<char>(n, m);
	 mtrx2 = exchange(mtrx2, n, m);
	 cout << "Измененная матрица знаков:" << endl;
	 print(mtrx2, n, m);

	system("pause");
	return 0;
}