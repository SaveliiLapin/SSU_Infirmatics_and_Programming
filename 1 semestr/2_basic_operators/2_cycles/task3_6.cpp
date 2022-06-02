#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float q, b, p = 0;

	cout << "Введите a и  b: ";
	cin >> q >> b;

	while (q >= b)
	{
		q -= b;
		p++;
	}

	cout << "Частное = " << p << " остаток = " << q << endl;

	system("pause");
	return 0;
}