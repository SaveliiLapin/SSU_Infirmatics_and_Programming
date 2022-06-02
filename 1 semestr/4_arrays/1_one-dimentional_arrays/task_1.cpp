#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, a, b, sum = 0;

	cout << "Введите размер массива: ";
	cin >> n;

	int *mass = new int [n];

	cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> mass[i];
	}

	cout << "Введите интервал - a и b: ";
	cin >> a >> b;

	if (a > b)
	{
		swap(a, b);
	}

	for (int i = 0; i < n; i++)
	{
		if (mass[i] != 0 && mass[i] % 2 == 0 && mass[i] >= a && mass[i] <= b)
		{
			sum += mass[i];
		}
	}

	if (sum == 0)
	{
		cout << "Таких элементов нет" << endl;
	}
	else
	{
		cout << "Сумма равна " << sum << endl;
	}

	system("pause");
	return 0;
}