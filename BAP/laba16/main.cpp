#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    {
        setlocale(LC_ALL, "Russian");
        const int n = 4;
        int i, j;
        int a[n][n];
        int sum = 0;
        cout << "Введите массив:\n";
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        cout << "Введённый массив:" << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                cout << setw(3) << a[i][j];
            cout << endl;
        }
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < n; ++j)
                if (j < i)
                    sum += a[i][j];
        }

        std::cout << "Сумма равна: " << sum << std::endl;
    }
    system("pause");
    {
        setlocale(LC_ALL, "Russian");
        char line[100];
        int count = 0;
        char searchKey = 'm';
        cout << "Введите строку: " << endl;
        cin >> line;
        for (int i = 0; i < 99; i++)
            if (line[i] == searchKey)
                count++;
        cout << "Количество символов в строке: " << count << endl;
        return 0;
    }
}