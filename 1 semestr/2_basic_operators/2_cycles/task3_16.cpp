#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			cout << i << " ";
		}

		cout << endl;

		for (int j = 1; j < i + 1; j++)
		{
			cout << i * 2 << " ";
		}

		cout << endl;
	}

	system("pause");
	return 0;
}