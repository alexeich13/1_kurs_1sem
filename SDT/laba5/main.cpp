#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    setlocale(LC_CTYPE, "Russian");
    cout << "���������� ����� ���������" << endl;
    for (int n = 0; n < 3; n++)
    {
        int count; // ���������� ��� ������ � switch
        cout << "�������� ��������: 1 - ��������� �����; 2 - ������� �����; 3 - �����; 4 - �����; "; cin >> count;
        switch (count) // ������ ��������� switch
        {
        case 1: // ���� count = 1
        {
            char unsigned c;
            cout << "������� ������ "; 
            cin >> c;
            cout << "��� ������� " << static_cast<int>(c) << endl;
            cout << "��������� ����� � ��������� � �������� ���� ����� �������� � 32 ������, ��  ���� " << static_cast<int>(c) - 32 << endl;

            break;
        }
        case 2: // ���� count = 2
        {
            char unsigned c;
            cout << "������� ������ "; 
            cin >> c;
            cout << "��� ������� " << static_cast<int>(c) +16 << endl;
            cout << "������� ����� � ��������� � �������� ���� ����� �������� � 32 ������, ��  ���� " << static_cast<int>(c) - 16 << endl;
            break;
        }
        case 3: // ���� count = 3
        {
            char unsigned c;
            cout << "������� ������ "; 
            cin >> c;
            cout << "��� ������� " << static_cast<int>(c) << endl;
            break;
        }
        case 4: // ���� count = 4
        {
            cout << "�� ��������� ������ � ������ ����������" << endl;
            return 0;
            break;
        }
        default: // ���� count ����� ������ ������� ��������
            cout << "��������� ��� �����" << endl;
            break;
        }
    }
}