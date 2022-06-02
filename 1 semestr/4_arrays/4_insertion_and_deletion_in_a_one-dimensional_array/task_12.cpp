#include <iostream>


using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");

	int n, x, y, count = 0;

	cout << "Введите n, x и y: ";
	cin >> n >> x >> y;

	int nev = n;

	int* mas = new int[2 * n];

	cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (mas[i] == x)
		{
			count++;
		}
	}

	nev += count;

	for (int i = n - 1; i >= 0; i--)
	{
		if (mas[i] == x)
		{
			mas[i + count] = y;
			count--;
			mas[i + count] = mas[i];
		}
		else
		{
			mas[i + count] = mas[i];
		}
	}

	for (int i = 0; i < nev; i++)
	{
		cout << mas[i] << " ";
	}

	system("pause");
	return 0;
}