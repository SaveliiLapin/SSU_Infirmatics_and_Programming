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

void change(int* mass, int n)
{
	for (int i = 0; i < n; i++)
	{
		mass[i] *= i;
	}
}

void print(int* mass, int n)
{
	for (int i = 1; i < n; i++)
	{
		cout << mass[i] << " ";
	}

	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	int n;

	cout << "Введите размер массива: ";
	cin >> n;

	n++;

	int* mass = create(n);
	change(mass, n);
	print(mass, n);

	system("pause");
	return 0;
}