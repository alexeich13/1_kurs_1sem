#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	{
		double z, q, y = -1.55, a = 6, j, n;
		for (n = 0; n < 4; n++)
		{
			cout << "Введите символ ";
			cin >> j;
			z = sqrt(a + 1) - tan(j + y);
			q = exp(-j * (0.1 * y)) + pow(3 * z, 2);
			cout << " z = " << z << "\t";
			cout << " q = " << q << endl;
		}
	}
	system("pause");
	{
		double z, q, y = -1.55, a = 6, j = -1;
		while (j < 1.1)
		{
			z = sqrt(a + 1) - tan(j + y);
			q = exp(-j * (0.1 * y)) + pow(3 * z, 2);
			cout << " z = " << z << "\t";
			cout << " q = " << q << endl;
			j = j + 0.2;
		}
	}
	system("pause");
	{
		double z, q, y = -1.55, a = 1, n, j;
		for (n = 0; n < 3; n++)
		{
			a = 1;
			cout << "Введите символ ";
			cin >> j;
			while (a < 2.1)
			{
				z = sqrt(a + 1) - tan(j + y);
				q = exp(-j * (0.1 * y)) + pow(3 * z, 2);
				cout << " z = " << z << "\t";
				cout << " q = " << q << endl;
				a = a + 0.2;
			}
		}
	}
}