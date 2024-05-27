#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int code[10];
	short i;
	char name1[50];
	cout << "¬ведите сообщение" << endl;
	cin >> name1;

	for (i = 0; name1[i] != '\0'; ++i) {
		cout << static_cast<unsigned>(static_cast<unsigned char>(name1[i])) << endl;
	}
}