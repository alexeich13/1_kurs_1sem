#include <iostream>
#include <iomanip>
#include "Header.h"
#include "First.h"
#include "Second.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� � win1251" << endl;
	char unsigned a, b, c;

	for (int n = 0; n < 3; n++)
	{
	start:
		int count;
		cout << "��������� ������(1) ������� ������(2) ������(3)"; cin >> count;
		switch (count)
		{
		case 1:
		{
			cout << "������� ��������� ������ : "; cin >> a;
			int x = First(a);
			cout << "� WIN1251 : " << x << endl;
			cout << "� WIN1251 ���������  : " << x - 32 << endl;
			break;
		}
		case 2:
		{
			cout << "������� ������ ������ : "; cin >> b;
			int y = Second(b);
			cout << "� WIN1251 : " << y << endl;
			cout << "� WIN1251 ���������  : " << y + 16 << endl;
			break;
		}
		case 3:
		{
			cout << "������� ������ = "; cin >> c;
			int z = Header(c);
			cout << "� WIN1251 : " << z << endl;
			break;
		}
		default:
			cout << "��������� ��� �����" << endl;
			goto start;
		}
		system("pause");
	}
}
