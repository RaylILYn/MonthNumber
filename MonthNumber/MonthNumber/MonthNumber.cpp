#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int z;
	cout << "Введите порядковый номер месяца, в результате получим пору года: ";
	cin >> z;
	switch (z)
	{
	case 1:
		cout << "Январь (Зима)" << endl;
		break;
	case 2:
		cout << "Февраль (Зима)" << endl;
		break;
	case 3:
		cout << "Март (Весна)" << endl;
		break;
	case 4:
		cout << "Апрель (Весна)" << endl;
		break;
	case 5:
		cout << "Май (Весна)" << endl;
		break;
	case 6:
		cout << "Июнь (Лето)" << endl;
		break;
	case 7:
		cout << "Июль (Лето)" << endl;
		break;
	case 8:
		cout << "Август (Лето)" << endl;
		break;
	case 9:
		cout << "Сентябрь (Осень)" << endl;
		break;
	case 10:
		cout << "Октябрь (Осень)" << endl;
		break;
	case 11:
		cout << "Ноябрь (Осень)" << endl;
		break;
	case 12:
		cout << "Декабрь (Зима)" << endl;
		break;
	default:
		cout << "Неверный номер месяца" << endl;
	}
	system("pause");
}