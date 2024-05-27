#include <iostream>
#include <iomanip>
#include "Header.h"
#include "First.h"
#include "Second.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "символы в win1251" << endl;
	char unsigned a, b, c;

	for (int n = 0; n < 3; n++)
	{
	start:
		int count;
		cout << "Латинский символ(1) Русский символ(2) Символ(3)"; cin >> count;
		switch (count)
		{
		case 1:
		{
			cout << "Введите латинский символ : "; cin >> a;
			int x = First(a);
			cout << "В WIN1251 : " << x << endl;
			cout << "В WIN1251 Заглавная  : " << x - 32 << endl;
			break;
		}
		case 2:
		{
			cout << "Введите руссий символ : "; cin >> b;
			int y = Second(b);
			cout << "В WIN1251 : " << y << endl;
			cout << "В WIN1251 Заглавная  : " << y + 16 << endl;
			break;
		}
		case 3:
		{
			cout << "Введите символ = "; cin >> c;
			int z = Header(c);
			cout << "В WIN1251 : " << z << endl;
			break;
		}
		default:
			cout << "Проверьте ваш выбор" << endl;
			goto start;
		}
		system("pause");
	}
}
