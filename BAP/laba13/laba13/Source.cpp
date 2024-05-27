#include <stdio.h>
#include <iostream>
#include <memory.h>
#include <string.h>
#include <cstring>
using namespace std;

int main(void)
{
    {
        int i, len, maxlen;
        const char* str = "010011000111001";
        for (i = 1, len = maxlen = 1; str[i]; i++)
            if (str[i] == str[i - 1])
            {
                len++;
                maxlen = len > maxlen ? len : maxlen;
            }
            else
                len = 1;
        cout << maxlen << endl;
        return 0;
    }
    {
        const char *s = "123456789", *st = "987654321";


    }
}

