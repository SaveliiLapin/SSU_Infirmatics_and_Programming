#include <iostream>


using namespace std;

int** create(int n)
{
	int** mas;

	mas = new int* [n];

	for (int j = 0; j < n; j++)
	{
		mas[j] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}

	return mas;
}

float average(int** mas, int n)
{
	int sum = 0, count = 0;

	for (int j = 0; j < n; j++)
	{
		for (int i = j; i < n - j; i++)
		{
			if (mas[i][j] % 2 != 0)
			{
				sum += mas[i][j];
				count++;
			}

			if (mas[n - i - 1][n - j - 1] % 2 != 0)
			{
				sum += mas[n - i - 1][n - j - 1];
				count++;
			}
		}
	}

	if (n % 2 != 0 && mas[n / 2 + 1][n / 2 + 1] % 2 != 0)
	{
		count--;
		sum -= mas[n / 2 + 1][n / 2 + 1];
	}

	return (float)sum / count;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	int n;
	float av;

	cin >> n;
	int** mas = create(n);

	av = average(mas, n);

	cout << "Среднее арифметическое равно " << av << endl;

	system("pause");
	return 0;
}