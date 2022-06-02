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

void min_max(int** mas, int n, int &min_str, int &max_str)
{
	int min_stol = 0, max_stol = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mas[i][j] < mas[min_str][min_stol])
			{
				min_str = i;
				min_stol = j;
			}
			if (mas[i][j] > mas[max_str][max_stol])
			{
				max_str = i;
				max_stol = j;
			}
		}
	}
}

int** exchange(int** mas, int n, int min, int max)
{
	if (min != max)
	{
		for (int j = 0; j < n; j++)
		{
			swap(mas[min][j], mas[max][j]);
		}
	}

	return mas;
}

int main()
{
	int n, min = 0, max = 0;

	cin >> n;
	int** mas = create(n);

	min_max(mas, n, min, max);
	mas = exchange(mas, n, min, max);

	print(mas, n);

	cout << min << " " << max << endl;

	system("pause");
	return 0;
}