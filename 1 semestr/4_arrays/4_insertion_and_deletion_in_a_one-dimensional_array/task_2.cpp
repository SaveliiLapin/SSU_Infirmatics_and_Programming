#include <iostream>


using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");

	int n, k = 0, x;

	cout << "Введите n: ";
	cin >> n;

	int nev = n;

	int* mas = new int[n];

	cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}

	cout << "Введите x: ";
	cin >> x;

	for (int i = 0; i < n; i++)
	{
		if (mas[i] == x)
		{
			k++;
			nev--;
		}
		else
		{
			mas[i - k] = mas[i];
		}
	}

	for (int i = 0; i < nev; i++)
	{
		cout << mas[i] << " ";
	}

	system("pause");
	return 0;
}