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

void print(int** mas, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}

int** exchange(int** mas, int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			swap(mas[i][j], mas[n - i - 1][j]);
		}
	}

	return mas;
}

int main()
{
	int n;

	cin >> n;
	int** mas = create(n);

	mas = exchange(mas, n);

	print(mas, n);

	system("pause");
	return 0;
}