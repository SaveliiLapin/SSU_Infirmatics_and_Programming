#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");

	int n;

	cout << "Введите год: ";
	cin >> n;

	switch (n % 10)
	{
	case 0:
		cout << "Белый ";
		break;
	case 1:
		cout << "Белый ";
		break;
	case 2:
		cout << "Синий ";
		break;
	case 3:
		cout << "Синий ";
		break;
	case 4:
		cout << "Зеленый ";
		break;
	case 5:
		cout << "Зеленый ";
		break;
	case 6:
		cout << "Красный ";
		break;
	case 7:
		cout << "Красный ";
		break;
	case 8:
		cout << "Жетлый ";
		break;
	case 9:
		cout << "Желтый ";
		break;
	}

	switch (n % 12)
	{
	case 0:
		cout << "обезьяна";
		break;
	case 1:
		cout << "петух";
		break;
	case 2:
		cout << "собака";
		break;
	case 3:
		cout << "свинья";
		break;
	case 4:
		cout << "крыса";
		break;
	case 5:
		cout << "бык";
		break;
	case 6:
		cout << "тигр";
		break;
	case 7:
		cout << "кролик";
		break;
	case 8:
		cout << "дракон";
		break;
	case 9:
		cout << "змея";
		break;
	case 10:
		cout << "лошадь";
		break;
	case 11:
		cout << "овца";
		break;
	}

	system("pause");
	return 0;
}