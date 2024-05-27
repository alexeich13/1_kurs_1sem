#include <iostream>
#include <ctime>
#include <iomanip> 
#include <conio.h>
#include <string.h>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
	{
		srand((unsigned)time(NULL));
		int** A, n, m, sum = 0;
		cout << "¬ведите n: ";
		cin >> n;
		cout << "¬ведите m: ";
		cin >> m;
		A = new int* [n];
		for (int i = 0; i < n; i++)
			A[i] = new int[m];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				A[i][j] = rand() % 99;
				cout << "A[" << i << "," << j << "] = " << A[i][j] << endl;
				sum += A[i][j];
			}
		}
		if (sum % 2 == 0) cout << "—умма элементов sum = " << sum << " Ч чЄтное число.";
		else cout << "—умма элементов sum = " << sum << " Ч нечЄтное число.";
	}
	system("pause");
	{
            srand(time(NULL));
            int n, m;
            cout << "¬ведите количество столбцов: ";
            cin >> n;
            cout << "\n¬ведите количество строк: ";
            cin >> m;
            int** matr = new int* [n]; // создание динамического двумерного массива (матрица)
            for (int i = 0; i < n; i++) {
                matr[i] = new int[m];
            }
            int* arr = new int[n]; // создание динамического массива 
            for (int i = 0; i < n; i++) // то, где выводик   элемент 1 или 0
            {
                for (int j = 0; j < m; j++)
                {
                    //cin >> matr[i][j];
                    matr[i][j] = rand() % 10;
                }
            }
            cout << "ћатрица:" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << matr[i][j] << ' ';
                }
                cout << endl;
            }
            // проверка матрицы
            int count = 0, k = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m - 1; j++) {
                    if (matr[i][j] >= matr[i][j + 1]) {
                        count++;
                    }
                }
                while (k < n) {
                    if (count == (n - 1)) {
                        arr[k] = 1;
                    }
                    else {
                        arr[k] = 0;
                    }
                    k++;
                    count = 0;
                    break;
                }

            }
            cout << "–езультат:" << endl;
            for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            system("pause");
	}
}

