#include<iostream>
using namespace std;

struct Student
{
	bool is_man = 0;
	int age = 20;
	string name = 'lox';
};


int main()
{
	setlocale(LC_ALL, "Russian");

	Student Katya;

	cout << Katya.name;

	system("pause");
	return 0;
}