#include <iostream>


using namespace std;

int placem_rec(int n, int m)
{
	int res = m;

	if (n > 1)
	{
		res = (m - n + 1) * placem_rec(n - 1, m);
	}

	return res;
}

int placem(int n, int m)
{
	int res = 1, nn = 1, mm = 1;

	if (n == 1)
	{
		return m;
	}
	else
	{
		for (int i = 1; i <= m; i++)
		{
			mm *= i;
		}

		for (int i = 1; i <= m - n; i++)
		{
			nn *= i;
		}

		return mm / nn;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, m;

	cout << "Введите n и m: ";
	cin >> n >> m;

	cout << "Число размещений (рекурсивный способ) равно " << placem_rec(n, m) << endl;
	cout << "Число размещений (нерекурсивный способ) равно " << placem(n, m) << endl;

	system("pause");
	return 0;
}