#include <ctime>
#include <iostream>
using namespace std;
void main()
{
	{
		setlocale(LC_ALL, "ru");
		srand(time(0));
		int size, i = 0;
		float* A, mult = 1, sum = 0;
		cout << "Введите размер массива: ";
		cin >> size;
		A = new float[size];
		for (i = 0; i < size; i++)
		{
			A[i] = 0.01 * (rand() % 10000) - 50;
			cout << A[i] << endl;
			if (A[i] < 0)
			{
				mult *= A[i];
			}
			if (A[i] > 0)
			{
				sum += A[i];
			}
		}
		cout << "Сумма: " << sum << endl;
		cout << "Произведение: " << mult << endl;
	}
	system("pause");
	{
		{
			setlocale(LC_ALL, "ru");
			srand(time(0));
			int i = 0, j = 0, ** A, sz = 4, min = 100, max = 0, sMin = 0, sMax = 0;
			A = new int* [sz];
			for (i = 0; i < 4; i++)
			{
				A[i] = new int[sz];
				for (j = 0; j < 4; j++)
				{
					A[i][j] = rand() % 99;
					cout << A[i][j] << "\t";
				}
				cout << "\n";
			}

			for (i = 0; i < 4; i++)
			{
				if (i == 0)
				{
					for (j = 0; j < 4; j++)
					{
						if (A[i][j] < min)
						{
							min = A[i][j];
						}
					}
					sMin += min;
					min = 100;
				}

				if (i == 1)
				{
					for (j = 0; j < 4; j++)
					{
						if (A[i][j] > max)
						{
							max = A[i][j];
						}
					}
					sMax += max;
					max = 0;
				}

				if (i == 2)
				{
					for (j = 0; j < 4; j++)
					{
						if (A[i][j] < min)
						{
							min = A[i][j];
						}
					}
					sMin += min;
					min = 100;
				}

				if (i == 3)
				{
					for (j = 0; j < 4; j++)
					{
						if (A[i][j] > max)
						{
							max = A[i][j];
						}
					}
					sMax += max;
					max = 100;
				}
			}
			cout << "Сумма минимальных элементов нечётных строк: " << sMin << endl;
			cout << "Сумма максимальных элементов чётных строк: " << sMax << endl;
		}
	}
}
 