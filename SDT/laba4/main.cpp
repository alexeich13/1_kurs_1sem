#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "�������� �������� ������ �� ���������" << endl;
    for (int n = 0; n < 3; n++)
    {
        int count; // ���������� ��� ������ � switch
        cout << "�������� ���� ���������: 1 - �������; 2 - �������1; 3 - �� �������� ��������; ";
        cin >> count;
        switch (count) // ������ ��������� switch
        {
        case 1: // ���� count = 1
        {
            cout << "���������� ������" << endl;
            break;
        }
        case 2: // ���� count = 2
        {
            cout << "��������� �������� ������� ���������" << endl; 
            break;
        }
        case 3: // ���� count = 3
        {
            cout << "���������� �� �������� �� ������� ����� � ���������� ������ �� ����� �� ����������"<< endl; 
            break;
        }
        default: // ���� count ����� ������ ������� ��������
            cout << "��������� ��� �����" << endl;
        }
        system("pause");
    }
}