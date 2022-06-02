#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float n, i = 2;
	int j = 2;

	cout << "Введите количество чисел: ";
	cin >> n;

	while (n != 0)
	{
		while (j <= sqrt(i) && i / j != (int)i / j)
		{
			j++;
		}

		if (j > sqrt(i))
		{
			cout << i << " ";
			n--;
		}

		j = 2;
		i++;
	}

	system("pause");
	return 0;
}