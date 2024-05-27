#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Алгоритм перехода дороги на светофоре" << endl;
    for (int n = 0; n < 3; n++)
    {
        int count; // переменная для выбора в switch
        cout << "Выберите цвет светофора: 1 - Зеленый; 2 - Красный1; 3 - Не работает светофор; ";
        cin >> count;
        switch (count) // начало оператора switch
        {
        case 1: // если count = 1
        {
            cout << "Переходите дорогу" << endl;
            break;
        }
        case 2: // если count = 2
        {
            cout << "Дождитесь зеленого сигнала светофора" << endl; 
            break;
        }
        case 3: // если count = 3
        {
            cout << "Посмотрите по сторонам на наличие машин и переходите дорогу во время их отсутствия"<< endl; 
            break;
        }
        default: // если count равно любому другому значению
            cout << "Проверьте ваш выбор" << endl;
        }
        system("pause");
    }
}