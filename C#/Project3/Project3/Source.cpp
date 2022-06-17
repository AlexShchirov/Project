#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int symbolcount;
	char symbol;
	int linetype;
	int index = 0;
	cout << "ВВедите количество символов в линии" << endl;
	cin >> symbolcount;

	cout << "Введите символ" << endl;
	cin >> symbol;

	cout << "Выберите тип линии" << endl
		<< "1 - вертикальная линия" << endl
		<< "2 - горизонтальная линия" << endl;

	cin >> linetype;

	if (linetype != 1 && linetype != 2)
	{
		cout << "Некорректный тип линии";
		return;
	}
	while (index < symbolcount)
	{
		if (linetype == 1)
		{
			cout << symbol << endl;
		}
		if (linetype == 2)
		{
			cout << symbol;
		}
		index++;
	}











}