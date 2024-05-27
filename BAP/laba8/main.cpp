#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	{
		
		double x, z, z1;
		const int size = 5, N=99;
		int a[N];
		for (int n = 1; n <= size; n++)
		{
			cout << "Введите Х = "; cin >> x;
			z1 = pow((x - 2), 2);
			cout << "z1 = " << z1 << "\n";
			z = 8 * 1.1 + z1;
			cout << "z = " << z << endl;
		}
	}
	system("pause");
	{
		const int N = 5;
		int a[N], max = -100000000, min = 100000000;
		cout << " Введите y = " << endl;
		for (int i = 1; i <= N; i++)
		{
			cin >> a[i];
		}
		for (int i = 1; i <= N; i++)
		{
			if (a[i] > max)
				max = a[i];
		}
		cout << "max = " << max << "\n";
		{
			double  y, y1 = 1, p;
			const int size = 5;
			for (int n = 1; n <= size; n++)
			{
				y = (pow(a[n], 2)) + 1;
				cout << "y = " << y << "\t";
				p = y + max;
				cout << "p = " << p << endl;
			}
		}
	}
	system("pause");
}