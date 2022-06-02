#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	float x, y;
	setlocale(LC_ALL, "RUS");

	cout << "Введите x и y:" << endl;

	cin >> x >> y;

	float F = sqrt((sqrt(cos(x) + sin(y)) + exp(x + y)) / sqrt(x + y + pow(log(x), 2)));

	cout << "F = " << F << endl;

	system("pause");
	return 0;
}