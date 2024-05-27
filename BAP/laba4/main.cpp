#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	{
		setlocale(LC_CTYPE, "Russian");
		char c, probel; probel = ' ';
		cout << "Введите символ "; cin >> c;
		cout << setw(40) << setfill(probel) << probel;
		cout << setw(1) << setfill(c) << c << endl;
		cout << setw(39) << setfill(probel) << probel;
		cout << setw(3) << setfill(c) << c << endl;
		cout << setw(38) << setfill(probel) << probel;
		cout << setw(5) << setfill(c) << c << endl;
		cout << setw(37) << setfill(probel) << probel;
		cout << setw(7) << setfill(c) << c << endl;
		cout << setw(36) << setfill(probel) << probel;
		cout << setw(9) << setfill(c) << c << endl;
		cout << setw(39) << setfill(probel) << probel;
		cout << setw(3) << setfill(c) << c << endl;
		cout << setw(38) << setfill(probel) << probel;
		cout << setw(5) << setfill(c) << c << endl;
		cout << setw(37) << setfill(probel) << probel;
		cout << setw(7) << setfill(c) << c << endl;
		cout << setw(36) << setfill(probel) << probel;
		cout << setw(9) << setfill(c) << c << endl;
		cout << setw(35) << setfill(probel) << probel;
		cout << setw(11) << setfill(c) << c << endl;
		cout << setw(34) << setfill(probel) << probel;
		cout << setw(13) << setfill(c) << c << endl;
		cout << setw(39) << setfill(probel) << probel;
		cout << setw(3) << setfill(c) << c << endl;
		cout << setw(39) << setfill(probel) << probel;
		cout << setw(3) << setfill(c) << c << endl;
		cout << setw(39) << setfill(probel) << probel;
		cout << setw(3) << setfill(c) << c << endl;
	}
	system("pause");
	{
		double a = 2, b = 3;
		a = a + b;
		b = b + 3;
		cout << a << "\n";
		cout << b << endl;
	}
	system("pause");
}





