#include <iostream>


using namespace std;

int fact_rec(int n)
{
	if (n > 1)
	{
		n *= fact_rec(n - 1);
	}

	return n;
}

int fact(int n)
{
	int res = 1;

	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}

	return res;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;

	cout << "Введите n: ";
	cin >> n;

	cout << "Факториал (рекурсивный вариант) равен " << fact_rec(n) << endl;
	cout << "Факториал (нерекурсивный вариант) равен " << fact(n) << endl;

	system("pause");
	return 0;
}