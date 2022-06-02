#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float a, b, h;

	cout << "Введите диапазон - а и b: " << endl;
	cin >> a >> b;
	cout << "Введите шаг h:" << endl;
	cin >> h;

	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}

	for (int x = a; x <= b; x += h)
	{
		if (pow(x, 2) - 1 <= 0)
		{
			cout << x << ". " << "Логарифм из неположительного числа!" << endl;
		}
		else if (pow(x, 2) - 4 * x + 4 < 0)
		{
			cout << x << ". " << "Корень из отрицательного числа!" << endl;
		}
		else if (pow(x, 2) - 4 * x + 4 == 0)
		{
			cout << x << ". " << "Деление на ноль!" << endl;
		}
		else
		{
			cout << x << ". " << log(pow(x, 2) - 1) / sqrt(pow(x, 2) - 4 * x + 4) << endl;
		}
	}

	system("pause");
	return 0;
}