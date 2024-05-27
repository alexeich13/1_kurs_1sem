#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	{
		setlocale(LC_CTYPE, "Russian");
		double a = 105 * pow(10, -4), m = 4, s, p, i = 7, x, n;
		for (n = 0; n < 4; n++)
		{
			cout << "Введите символ ";
			cin >> x;
			s = exp(-a * x) - log(i / x * m) / log(pow(m, 2));
			if (s <= 2 * x)
				p = sin(-6 * s);
			else
				p = pow(-i * s, 2);
			cout << "s = " << s << "\t";
			cout << "p = " << p << endl;
		}
	}
	{
		int n;
		cout << "Введите число ";
		cin >> n;
		for (int i = 100; i < 1000; i++)
			if (i % 10 + (i / 10) % 10 + (i / 100) % 10 == n)
				cout << i << endl;
		return 0;
	}
}
