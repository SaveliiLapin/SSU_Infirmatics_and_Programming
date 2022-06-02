#include <iostream>


using namespace std;

int** fill(int n)
{
	int** mas;
	int k = 0, sign = -1, i = n - 1, j = n - 1;

	mas = new int* [n];

	for (int j = 0; j < n; j++)
	{
		mas[j] = new int[n];
	}

	while (k < pow(n, 2))
	{
		mas[i][j] = k;

		if ((k + 1) % n == 0)
		{
			i--;
			
			if (sign > 0)
			{
				sign = -1;
			}
			else
			{
				sign = 1;
			}
		}
		else
		{
			j += sign;
		}

		k++;
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

int main()
{
	int n;

	cin >> n;
	int** mas = fill(n);
	print(mas, n);

	system("pause");
	return 0;
}