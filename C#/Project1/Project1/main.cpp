#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	char var;
	cout << "������� �������������� ��������" << endl;
	cin >> var;
	cout << "������� ������ �����:" << endl;
	cin >> a;
	cout << "������� ������ �����:" << endl;
	cin >> b;
	if (var == '+')
	{
		cout << "��������� �������� a � b �����:" << a + b << endl;
	}
	if (var == '-')
	{
		cout << "��������� ��������� b �� a �����:" << a - b << endl;
	}
	if (var == '*')
	{
		cout << "��������� ��������� a �� b �����:" << a * b << endl;
	}
	if (var == '/')
	{
		if (b == 0)
		{
			cout << "�� ���� ������ ������!!!" << endl;
		}
		else
		{
			cout << "��������� ������� a �� b �����:" <<(double)a / b << endl;
		}
	}
	else
	{
		cout << "�� �� ������� �������������� ��������, ���������� �����";
	}
}