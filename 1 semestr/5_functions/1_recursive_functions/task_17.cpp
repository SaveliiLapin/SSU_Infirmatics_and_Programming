#include<iostream>
#include<cmath>
using namespace std;

void print(int n, char a)
{
	for (int i = 0; i <= n; i++)

		cout << a;
}

void F(int c, int p, int n, char a) { // p - пробелов, n - символов
	if (c < n)
	{
		print(c, a); //печать цифр

		print(p, '-'); //печать пробелов

		print(c, a); //печать цифр


		cout << endl; //переход на следующую строку

		F(c + 1, p - 2, n, a + 1); //вызов функции для следующей строки

		print(c, a); //нижняя часть

		print(p, '-');

		print(c, a);

		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	int N;

	do {
		cout << " Введите N < 10: ";

		cin >> N;

	} while (N > 9 and N < 1);


	F(0, 2 * N - 3, N, '1'); //вызов функции

	system("pause");
	return 0;
}