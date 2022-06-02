#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float k, x, S = 0, fact = 1;

	cout << "Введите N и x: ";
	cin >> k >> x;

	for (int n = 1; n <= k; n++)
	{
		for (int i = (n - 1) * 2 + 2; i <= 2 * n + 1; i++)
		{
			fact *= i;
		}

		S += pow(-1, n - 1) * pow(x, 2 * n) * pow(3, n + 2) / fact;
	}

	cout << "Сумма равна " << S << endl;

	system("pause");
	return 0;
}