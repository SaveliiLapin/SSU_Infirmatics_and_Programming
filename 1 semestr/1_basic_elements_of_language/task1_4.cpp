#include <iostream>
#include <cmath>


using namespace std;

int main() 
{
	float x, y;
	setlocale(LC_ALL, "RUS");

	cout << "Введите x и y:" << endl;

	cin >> x >> y;

	float F = (1 / 3) * sqrt((exp(pow(x, 2) + pow(y, 2)) + 5 * x) / cos(pow((x + y), 2))) + (x / y);

	cout << "F = " << F << endl;

	system("pause");
	return 0;
}