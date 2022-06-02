#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	int x;
	setlocale(LC_ALL, "RUS");

	cout << "Введите x:" << endl;

	cin >> x;

	int y = 25 % (x % 10) + 10 * (25 % (x / 10 % 10)) + 100 * (25 % (x / 100));

	cout << "y = " << y << endl;

	system("pause");
	return 0;
}