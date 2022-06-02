#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, a, b, x, count = 0;

	cout << "Введите размер массива: ";
	cin >> n;

	int *mass = new int [n];

	cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> mass[i];
	}

	cout << "Введите X: ";
	cin >> x;

	for (int i = 0; i < n; i++)
	{
		if (mass[i] % x != 0)
		{
			cout << i << " ";
			count += 1;
		}
	}

	if (count == 0)
	{
		cout << "Таких элементов нет" << endl;
	}

	system("pause");
	return 0;
}