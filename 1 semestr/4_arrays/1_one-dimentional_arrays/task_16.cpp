#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, min = 0, max = 0;

	cout << "Введите размер массива: ";
	cin >> n;

	int *mass = new int [n];

	cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> mass[i];

		if (mass[i] < mass[min])
		{
			min = i;
		}

		if (mass[i] > mass[max])
		{
			max = i;
		}
	}

	swap(mass[min], mass[max]);

	for (int i = 0; i < n; i++)
	{
		cout << mass[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}