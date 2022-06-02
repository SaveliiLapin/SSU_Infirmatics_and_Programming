#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float eps, x, sum = 0, n = 0, fact;

	cout << "Введите x и Epsilon: ";
	cin >> x >> eps;

	float a = x;

	while (abs(a) > eps && n < 100)
	{
		n++;
		fact = 1;
		for (int i = 2; i <= 2 * n; i++)
		{
			fact *= i;
		}

		a = pow(x, n) / fact;
		sum += a;

		if (abs(a) > eps)
		{
			cout << n << ". " << sum << endl;
		}
	}

	if (n == 0)
	{
		cout << "Ряд расходится" << endl;
	}

	system("pause");
	return 0;
}