#include <iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "ru");
	
	cout << "начало цикла" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Переменная i= " << i << endl;
		if (i == 5)
		{
			break;
		}
	}

	cout << "конец цикла" << endl;






}