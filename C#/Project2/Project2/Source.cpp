#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, selection;
	cout << "Введите два числа" << endl;
	cin >> a >> b;

	cout << "Выберите математическую операцию:" << endl <<
		"1.Сложение" << endl <<
		"2.Вычитание" << endl <<
		"3.Умножение" << endl <<
		"4.Деление" << endl;

	cin >> selection;

	switch (selection)
	{
	case 1:
		cout << "Результат сложения " << a + b << endl;
		break;
	case 2:
		cout << "Результат вычитания " << a - b << endl;
		break;
	case 3:
		cout << "Результат умножения " << a * b << endl;
		break;
	case 4:
		if (b != 0)
		{
			cout << "Результат деления " << (double)a / b << endl;
			break;
		}
		else
			cout << "На ноль делить нельзя!!!" << endl;
		break;
	default:
		cout << "Ошибка! Неверно выбрана операция!";
		break;
	}

}