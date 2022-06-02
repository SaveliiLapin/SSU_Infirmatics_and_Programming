#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	int x, a;
	setlocale(LC_ALL, "RUS");

	cout << "Введите x:" << endl;

	cin >> x;

	if (pow(x, 2) - 1 <= 0)
	{
		cout << "Логарифм неположительного числа" << endl;
	}
	else if (pow(x, 2) - 16 == 0 || pow(x, 2) - 4 * x + 4 == 0)
	{
		cout << "Деление на ноль" << endl;
	}
	else if (x + 5 < 0 || pow(x, 2) - 4 * x + 4 < 0)
	{
		cout << "Корень из отрицательного числа" << endl;
	}
	else
	{
		cout << (sin(log(pow(x, 2) - 1))) / (pow(x, 2) - 16) + sqrt(x + 5) / sqrt(pow(x, 2) - 4 * x + 4) << endl;
	}


	system("pause");
	return 0;
}