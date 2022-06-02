#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	int x, a;
	setlocale(LC_ALL, "RUS");

	cout << "Введите a и x:" << endl;

	cin >> a >> x;

	if (a < 100 || a > 999 || x < 0 || x > 9)
	{
		cout << "Некорректный ввод" << endl;
	}
	else
	{
		int f = a / 100;
		int s = a / 10 % 10;
		int t = a % 10;

		if (f > x && s > x && t > x)
		{
			a = a - 100;
		}
		else if (f > x && s > x)
		{
			a = a + 100;
		}
		else if (f < x && s < x && t < x)
		{
			a = a - 50;
		}
		else if (s < x && t < x)
		{
			a = a + 50;
		}
		else
		{
			a = a + 10;
		}

		cout << a << endl;
	}

	system("pause");
	return 0;
}