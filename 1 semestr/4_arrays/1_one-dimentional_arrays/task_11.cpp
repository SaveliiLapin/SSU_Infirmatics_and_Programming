#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, min = 0, max = 0, sum = 0, t_sum = 0;

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
			t_sum = 0;
			sum = 0;
		}
		else if (min != i)
		{
			t_sum += mass[i];
		}

		if (mass[i] >= mass[max])
		{
			max = i;
			sum = t_sum - mass[i];
		}
	}

	if (min > max)
	{
		cout << "max раньше min" << endl;
	}
	else if (max - min <= 1)
	{
		cout << "Между min и max нет значений" << endl;
	}
	else
	{
		cout << "Среднее арифметическое между min и max равно " << float(sum) / (max - min - 1) << endl;
	}

	system("pause");
	return 0;
}