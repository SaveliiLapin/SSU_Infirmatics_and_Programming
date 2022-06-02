#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	int x;
	setlocale(LC_ALL, "RUS");

	cout << "Введите x:" << endl;

	cin >> x;

	int fi = x / 1000;
	int s = x / 100 % 10;
	int t = x % 100 / 10;
	int fo = x % 10;

	int y = 1000 * ((fi + s) % 10) + 100 * ((s + t) % fi) + 10 * ((fi + s + t + fo) % fi) + abs(s - fo);

	cout << "y = " << y << endl;

	system("pause");
	return 0;
}