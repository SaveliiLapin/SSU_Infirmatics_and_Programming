#include <iostream>


using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");

	int n, k = 0, x;

	cout << "Введите n: ";
	cin >> n;
	
	int* mas = new int[n * 2];

	cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];

		if (mas[i] % 2 == 0)
		{
			k++;
		}
	}

	int nev = n + k;

	cout << "Введите x: ";
	cin >> x;

	for (int i = n - 1; i >= 0; i--)
	{
		if (mas[i] % 2 == 0)
		{
			mas[i + k] = x;
			mas[i + k - 1] = mas[i];
			k--;
		}
		else
		{
			mas[i + k] = mas[i];
		}
	}

	for (int i = 0; i < nev; i++)
	{
		cout << mas[i] << " ";
	}

	system("pause");
	return 0;
}