﻿// lab_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//DrozdAlex2004
//представление строки в Windows-1251: 68 114 111 122 100 65 108 101 120
// в UTF-8: 68 114 111 122 100 65 108 101 120 32 30 30 34
// в UTF-16: 44 72 6f 7a 64 41 6c 65 78 32 30 30 34 00

//ДроздАлексей2004
// Windows-1251: 196 240 238 231 228 192 235 229 234 241 229 233
// UTF-8: 196 240 238 231 228 192 235 229 234 241 229 233 32 30 30 34
// Utf-16: c4 f0 ee e7 e4 c0 eb e5 ea f1 e5 e9 32 30 30 34 00

//Дрозд2004Alex
// Windows-1251: 196 240 238 231 228 65 108 101 120
// UTF-8: 196 240 238 231 228 32 30 30 34 65 108 101 120
// UTF-16: c4 f0 ee e7 e4 32 30 30 34 41 6c 65 78 00

int main()
{
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "DrozdAlex2004";
    char rfie[] = "ДроздАлексей2004";
    char lr[] = "Дрозд2004Alex";

    wchar_t Lfie[] = L"DrozdAlex2004";
    wchar_t Rfie[] = L"ДроздАлексей2004";
    wchar_t LR[] = L"Дрозд2004Alex";


    std::cout << hello <<lfie << std::endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
