#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int symbolcount;
	char symbol;
	int linetype;
	int index = 0;
	cout << "������� ���������� �������� � �����" << endl;
	cin >> symbolcount;

	cout << "������� ������" << endl;
	cin >> symbol;

	cout << "�������� ��� �����" << endl
		<< "1 - ������������ �����" << endl
		<< "2 - �������������� �����" << endl;

	cin >> linetype;

	if (linetype != 1 && linetype != 2)
	{
		cout << "������������ ��� �����";
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