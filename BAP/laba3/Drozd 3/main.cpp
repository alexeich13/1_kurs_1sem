#include <iostream>
void main()
{
	{
		double d, f, i = -6, x = 4.5, z = 1.5e-6;
		d = tan(-x * i) / sqrt(x - z);
		f = sin(2 * d) / d;
		std::cout << " d = " << d;
		std::cout << " f = " << f;
	}
	system("pause");
	{
		double z, y, n = 2, b = -0.12, x = 1.3e-4;
		z = 1 / (x - 1) + sin(x) - sqrt(n);
		y = (exp(-b) + 1) / 2 * z;
		std::cout << " z = " << z;
		std::cout << " y = " << y;
	}
	system("pause");
	{
		double w, d, a = 1.5, x = -1.8, z = 1.5e-9;
		w = tan(1) * (1 + x) + z - exp(a);
		d = 9 * sqrt(2 - 3 * x) + abs(a + 1);
		std::cout << " w = " << w;
		std::cout << " d = " << d;
	}
	system("pause");
	{
		double s, w, v, a = 1.5, b = -8.1, j = 4, t = 4e-8;
		s = sqrt(t * a / t + 1) + 4 * exp(2 * b);
		w = s * a / (1 + 0.1 * a);
		v = s + j * sqrt(a * a + b * b);
		std::cout << " s = " << s;
		std::cout << " w = " << w;
		std::cout << " v = " << v;
	}
}