#include <iostream>
#include <cmath>

using namespace std;

int* create(int n)
{
	int* mass = new int[n];

	cout << "Введите элементы массива:" << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> mass[i];
	}

	return mass;
}

int* create_poly(int* mass, int n, int A)
{
	int* mass_poly = new int[n + 2];

	for (int i = 0; i < 2; i++)
	{
		mass_poly[i] = mass[i] * -A;
	}

	for (int i = 2; i < n; i++)
	{
		mass_poly[i] = mass[i - 2] + mass[i] * -A;
	}

	for (int i = n; i < n + 2; i++)
	{
		mass_poly[i] = mass[i - 2];
	}

	return mass_poly;
}

void print(int* mass, int n)
{
	for (int i = 0; i < n + 2; i++)
	{
		cout << mass[i] << " ";
	}

	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, A;

	cout << "Введите размер массива и А: ";
	cin >> n >> A;

	n++;

	int* mass = create(n);
	int* mass_poly = create_poly(mass, n, A);
	print(mass_poly, n);

	system("pause");
	return 0;
}