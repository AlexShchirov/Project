#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	char var;
	cout << "Введите арифметическую операцию" << endl;
	cin >> var;
	cout << "Введите первое число:" << endl;
	cin >> a;
	cout << "Введите второе число:" << endl;
	cin >> b;
	if (var == '+')
	{
		cout << "Результат сложения a и b равен:" << a + b << endl;
	}
	if (var == '-')
	{
		cout << "Результат вычитания b от a равен:" << a - b << endl;
	}
	if (var == '*')
	{
		cout << "Результат умножения a на b равен:" << a * b << endl;
	}
	if (var == '/')
	{
		if (b == 0)
		{
			cout << "На ноль делить нельзя!!!" << endl;
		}
		else
		{
			cout << "Результат деления a на b равен:" <<(double)a / b << endl;
		}
	}
	else
	{
		cout << "Вы не выбрали арифметическую операцию, попробуйте снова";
	}
}