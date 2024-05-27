#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Нахождение кодов элементов" << endl;
    for (int n = 0; n < 3; n++)
    {
        int count; // переменная для выбора в switch
        cout << "Выберите действие: 1 - Латинская буква; 2 - Русская буква; 3 - Число; 4 - Выход; "; cin >> count;
        switch (count) // начало оператора switch
        {
        case 1: // если count = 1
        {
            char unsigned c;
            cout << "Введите символ "; 
            cin >> c;
            cout << "Код символа " << static_cast<int>(c) << endl;
            cout << "Латинская буква в прописном и строчном виде имеет различие в 32 пункта, то  есть " << static_cast<int>(c) - 32 << endl;

            break;
        }
        case 2: // если count = 2
        {
            char unsigned c;
            cout << "Введите символ "; 
            cin >> c;
            cout << "Код символа " << static_cast<int>(c) +16 << endl;
            cout << "Русская буква в прописном и строчном виде имеет различие в 32 пункта, то  есть " << static_cast<int>(c) - 16 << endl;
            break;
        }
        case 3: // если count = 3
        {
            char unsigned c;
            cout << "Введите символ "; 
            cin >> c;
            cout << "Код символа " << static_cast<int>(c) << endl;
            break;
        }
        case 4: // если count = 4
        {
            cout << "Вы закончили работу с данной программой" << endl;
            return 0;
            break;
        }
        default: // если count равно любому другому значению
            cout << "Проверьте ваш выбор" << endl;
            break;
        }
    }
}