#include<iostream>

using namespace std;

int Akkerman_f(int m, int n)
{
	if (m == 0)
	{
		return (n + 1);
	}

	if (m > 0 && n == 0)
	{
		return Akkerman_f(m - 1, 1);
	}

	if (m > 0 && n > 0)
	{
		return Akkerman_f(m - 1, Akkerman_f(m, n - 1));
	}
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int m, n;

	cout << "Введите n и  m: ";
	cin >> m >> n;

	cout << Akkerman_f(m, n);

	system("pause");
	return 0;
}
