#include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "RUS");

	float y1 = -2, y2 = 1, y, n;

	cout << "Введите n: ";
	cin >> n;

	if (n < 1)
	{
		cout << "Некорректное значение n!" << endl;
	}
	else if (n == 1)
	{
		cout << "y = " << y1 << endl;
	}
	else if (n == 2)
	{
		cout << "y = " << y2 << endl;
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			y = (1.0 / 6) * (y2 + (1.0 / y1));
			y1 = y2;
			y2 = y;
		}

		cout << "y = " << y << endl;
	}


	system("pause");
	return 0;
}