#include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "RUS");

	float a1, b1, c1, d1, a2, b2, c2, d2, z0, a, b, c, opr, oprx, opry, x, y, k;

	cout << "Введите коэффициенты первой плоскости:" << endl;

	cin >> a1 >> b1 >> c1 >> d1;

	cout << "Введите коэффициенты второй плоскости:" << endl;

	cin >> a2 >> b2 >> c2 >> d2;

	if (a1 == 0 && b1 == 0 && c1 == 0)
	{
		cout << "1 - не плоскость" << endl;
	}
	else if (a2 == 0 && b2 == 0 && c2 == 0)
	{
		cout << "2 - не плоскость" << endl;
	}
	else
	{
		if (a2 != 0)
		{
			k = a1 / a2;
		}
		else if (b2 != 0)
		{
			k = b1 / b2;
		}
		else
		{
			k = c1 / c2;
		}

		if (a2 * k == a1 && b2 * k == b1 && c2 * k == c1 && d2 * k == d1)
		{
			cout << "Совпадают" << endl;
			system("pause");
			return 0;
		}
		else if (a2 * k == a1 && b2 * k == b1 && c2 * k == c1)
		{
			cout << "Параллельны" << endl;
			system("pause");
			return 0;
		}

		cout << "Введите координату точки M z0:" << endl;
		cin >> z0;

		a = b1 * c2 - c1 * b2;
		b = c1 * a2 - a1 * c2;
		c = a1 * b2 - b1 * a2;

		// поиск x и y методом Крамера 

		opr = a1 * b2 - b1 * a2;
		oprx = (-1 * d1 - c1 * z0) * b2 - b1 * (-1 * d2 - c2 * z0);
		opry = a1 * (-1 * d2 - c2 * z0) - a2 * (-1 * d1 - c1 * z0);
		x = oprx / opr;
		y = opry / opr;

		if (x == -0)
		{
			x = 0;
		}

		cout << oprx << opr;
		cout << "Пересекаются" << endl;
		cout << "x0 = " << x << ", y0 = " << y << endl;
		cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	}

	system("pause");
	return 0;
}