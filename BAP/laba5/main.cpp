#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, b, c, z, k;
	cout << "¬ведите a "; cin >> a;
	cout << "¬ведите b "; cin >> b;
	cout << "¬ведите c "; cin >> c;
    if (a != 0 && b != 0 && c!=0)
		z = pow(a * b * c, 1.5/3.0);
	else
		z = (a + b + c) / 3;
	cout << " z =  " << z << endl;
}
