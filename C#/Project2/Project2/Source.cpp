#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, selection;
	cout << "������ ����, ����������� ������������ ���, �������� ���������� ��������" << endl;
	system("pause");
	cout << "������� ��� �����:" << endl;
	cout << "������ �����: ";
	cin >> a;
	cout << "������ �����: ";
	cin >> b;
	cout << "�������� �������������� ��������:" << endl <<
		"1.��������" << endl <<
		"2.���������" << endl <<
		"3.���������" << endl <<
		"4.�������" << endl;

	cin >> selection;

	switch (selection)
	{
	case 1:
		cout << "��������� �������� " << a + b << endl;
		break;
	case 2:
		cout << "��������� ��������� " << a - b << endl;
		break;
	case 3:
		cout << "��������� ��������� " << a * b << endl;
		break;
	case 4:
		if (b != 0)
		{
			cout << "��������� ������� " << (double)a / b << endl;
			break;
		}
		else
			cout << "�� ���� ������ ������!!!" << endl;
		break;
	default:
		cout << "������! ������� ������� ��������!";
		break;
	}

}