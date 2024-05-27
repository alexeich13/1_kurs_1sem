#include <iostream>
#include <iomanip>
#include <ctime>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, sz, A[N];
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
	}
	double o;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		o = A[i] % 7;
		if (o == 0)
		{
			for (int j = i; j <= sz; j++)
				A[j] = A[j + 1]; sz--;
		}
	}
	cout << "Массив после удаления элементов" << endl;

	for (i = 0; i < sz; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


	i = 0;
	while (i < sz)
	{
		if (A[i] % 2 == 1)
		{
			for (j = sz; j > i; j--)
				A[j] = A[j - 1];
			sz++;
			A[i + 1] = 4;
		}
		i++;
	}

	cout << "Массив после добавления элемента со значением 4 после каждого нечетного элемента: " << endl;
	for (i = 0; i < sz; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	{
		int  i, j, k;
		int mas[10];
		j = 0;
		cout << "Введите число элементов массива: " << endl;
		cin >> k;
		if (k > 10) {
			cout << "Ошибка!" << endl;
			return 1;
		}
		else {
			cout << "Первоначальный массив: " << endl;
			for (i = 0; i < k; i++) {
				mas[i] = rand() % 101 - 50;
				cout << mas[i] << setw(5);
			}
			cout << endl;
			for (i = 0; i < k; i++) {
				if (mas[i] < 0) {
					mas[j] = mas[i];
					j++;
				}
			}
			for (i = 0; i < k + 1; i++) {
				if (mas[i] > 0) {
					mas[j] = mas[i];
					j++;
				}
			}
			cout << "Измененный массив:" << endl;
			for (j = 0; j < k; j++) {
				cout << mas[j] << setw(5);
			}
		}
		return 0;
	}
}
