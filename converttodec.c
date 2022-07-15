#include "main.h"
long long converttodec(int number, int base)
{
    int decimalnumber = 0, i = 0;

    while (number != 0)
    {
        decimalnumber += (number % 10) * power(base, i);
        i++;
        number /= 10;
    }
    i = 1;

    return (decimalnumber);
}