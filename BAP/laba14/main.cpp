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
		cout << "������� n: ";
		cin >> n;
		cout << "������� m: ";
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
		if (sum % 2 == 0) cout << "����� ��������� sum = " << sum << " � ������ �����.";
		else cout << "����� ��������� sum = " << sum << " � �������� �����.";
	}
	system("pause");
	{
            srand(time(NULL));
            int n, m;
            cout << "������� ���������� ��������: ";
            cin >> n;
            cout << "\n������� ���������� �����: ";
            cin >> m;
            int** matr = new int* [n]; // �������� ������������� ���������� ������� (�������)
            for (int i = 0; i < n; i++) {
                matr[i] = new int[m];
            }
            int* arr = new int[n]; // �������� ������������� ������� 
            for (int i = 0; i < n; i++) // ��, ��� ������� � ������� 1 ��� 0
            {
                for (int j = 0; j < m; j++)
                {
                    //cin >> matr[i][j];
                    matr[i][j] = rand() % 10;
                }
            }
            cout << "�������:" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << matr[i][j] << ' ';
                }
                cout << endl;
            }
            // �������� �������
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
            cout << "���������:" << endl;
            for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            system("pause");
	}
}

